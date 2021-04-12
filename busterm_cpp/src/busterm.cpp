#include <iostream>
#include <vector>
using namespace std;

class ArraySort
{
    private:
    
    static void swap(int* a, int* b) 
    { 
        int t = *a; 
        *a = *b; 
        *b = t; 
    } 
    
    static int partition (int arr[], int low, int high) 
    { 
        int i = low-1;
        for (int j = low; j <= high-1; j++) 
            if (arr[j] < arr[high]) 
                swap(&arr[++i], &arr[j]); 
        swap(&arr[i+1], &arr[high]); 
        return ++i; 
    }

    public:

    static void sort(int arr[], int low, int high) 
    { 
      if (low < high) 
      { 
        int pi = partition(arr, low, high); 
        sort(arr, low, pi - 1); 
        sort(arr, pi + 1, high); 
      } 
    }
    
};


class BusTerminal
{
    private:
    
    int *m_seats = 0;
    int m_size = 0;
    
    bool canPlace(int p, int sep) 
    { 
      int placed = 1; 
      int last = m_seats[0]; 

      for (int i = 1; i < m_size; i++) { 
        int seat = m_seats[i]; 
        if (seat - last >= sep) { 
          placed++; 
          last = seat; 
          if (placed == p)
            return true; 
        } 
      } 

      return false; 
    } 

    int maxDistance(int p) 
    {
        ArraySort::sort(m_seats, 0, m_size-1); 
        int res = 0, start = 0, end = m_seats[m_size - 1] - m_seats[0]; 

        while (start <= end) 
        { 
            int mid = start + ((end - start) / 2); 

            // Can passengers be placed in a way that min distance
            // between any two passengers is at least mid?
            if (canPlace(p, mid)) 
            { 
                res = mid; 
                start = mid + 1; 
            } 
            else 
            { 
                end = mid - 1; 
            } 
        } 

        return res; 
    }
    
    public:
    
    BusTerminal(int *seats, int size)
    {
        m_seats = seats;
        m_size = size;
    }
    
    int getSeats()
    {
        return m_size;
    }

    int canTransport(int q, int d) 
    {
        int m, p = q;
        do {
            m = maxDistance(p);
            if (m<d) p--;
        } while(m<d && p>0);
        return p;
    }
    
};


class CApp
{
    private:

    void printArray(int arr[], int size) 
    { 
        for (int i=0; i < size; i++) 
            cout << arr[i] << " "; 
        cout << endl;
    }
    
    public:

    void processQueue(int seats[], int n, int q = 10, int dist = 2) 
    { 
        BusTerminal *term = new BusTerminal(seats, n);
    
        cout << "Bus Terminal:" << endl << q << " passengers queueing for " 
				<< n << " seats..." << endl;
        int p = term->canTransport(q, dist);
        cout << "Free Seats: ";
        printArray(seats, n);
        cout << "Transporting " << p << " passengers (required distance " 
			<< dist << ")"<< endl;
    }
    
    

};

int main()
{
    vector<int> seats = {3, 2, 8, 1, 9, 6, 12, 10, 13, 15, 16, 4, 21};
    CApp app;
    app.processQueue(seats.data(), seats.size());
    return 0;
}

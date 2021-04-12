#include <stdio.h>
#include <stdbool.h>

void swap(int* a, int* b) { 
  int t = *a; 
  *a = *b; 
  *b = t; 
} 

int partition (int arr[], int low, int high) { 
  int i = low-1;
  for (int j = low; j <= high-1; j++) 
    if (arr[j] < arr[high]) 
      swap(&arr[++i], &arr[j]); 
  swap(&arr[i+1], &arr[high]); 
  return ++i; 
}

void sort(int arr[], int low, int high) { 
  if (low < high) { 
    int pi = partition(arr, low, high); 
    sort(arr, low, pi - 1); 
    sort(arr, pi + 1, high); 
  } 
} 
  
bool canPlace(int arr[], int n, int p, int sep) { 
  int placed = 1; 
  int last = arr[0]; 

  for (int i = 1; i < n; i++) { 
    int seat = arr[i]; 
    if (seat - last >= sep) { 
      placed++; 
      last = seat; 
      if (placed == p)
        return true; 
    } 
  } 

  return false; 
} 
  
int maxDistance(int seats[], int n, int p) { 
  sort(seats, 0, n-1); 
  int res = 0, start = 0, end = seats[n - 1] - seats[0]; 

  while (start <= end) { 
    int mid = start + ((end - start) / 2); 

    // Can passengers be placed in a way that min distance
    // between any two passengers is at least mid?
    if (canPlace(seats, n, p, mid)) { 
      res = mid; 
      start = mid + 1; 
    } 
    else { 
      end = mid - 1; 
    } 
  } 

  return res; 
}

int canTransport(int seats[], int n, int d, int q) {
  int m, p = q;
  do {
    m = maxDistance(seats, n, p);
    if (m<d) p--;
  } while(m<d && p>0);
  return p;
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}
  
int main() { 
  int seats[] = {3, 2, 8, 1, 9, 6, 12, 10, 13, 15, 16, 4}; 
  int n = sizeof(seats) / sizeof(int); 
  int q = 10;
  int dist = 2;
    
  printf("Bus Terminal:\n%d passengers queueing for %d seats...\n", q, n);
  int p = canTransport(seats, n, dist, q);
  printf("Free Seats: ");
  printArray(seats, n);
  printf("Transporting %d passengers (required distance %d)\n", p, dist);

  return 0; 
}

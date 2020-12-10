#include <stdio.h> 

#include "defines.h"
#include "countIslands.h"

int main() 
{ 
    int M[][COL] = { { 1, 1, 0, 0, 1, 0 }, 
                     { 0, 1, 0, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 1 }, 
                     { 1, 1, 0, 1, 0, 1 },
                     { 0, 0, 0, 1, 0, 0 } }; 

    for (int i = -1; i <= ROW; ++i) 
        for (int j = -1; j <= COL; ++j)
            printf("%s",(i>=0 && i<ROW && j>=0 && j<COL)?(M[i][j]?"\033[1;31m█\033[0m":"░"):(j<COL?"▓":"▓\n"));  
    printf("\nNumber of islands is: %d\n", countIslands(M)); 
  
    return 0; 
} 

/////////////////////////////////////////////////////////////////
// To run tests, execute "ceedling test" in the terminal
/////////////////////////////////////////////////////////////////

#include <stdio.h> 

#include "inc/countIslands.hpp"

int main() 
{ 
    vector< vector<int> > M = { { 1, 1, 0, 0, 1, 0 }, 
                                { 0, 1, 0, 0, 0, 1 }, 
                                { 1, 0, 0, 1, 0, 0 }, 
                                { 0, 0, 0, 0, 0, 1 }, 
                                { 1, 1, 0, 1, 0, 1 },
                                { 0, 0, 0, 1, 0, 0 } }; 

    CIslandCounter c(M);

    for (int i = -1; i <= c.rows(); ++i) 
        for (int j = -1; j <= c.cols(); ++j)
            printf("%s",(i>=0 && i<c.rows() && j>=0 && j<c.cols())?(M[i][j]?"\033[1;31m█\033[0m":"░"):(j<c.cols()?"▓":"▓\n"));  

    printf("\nNumber of islands is: %d\n", c.getIslands()); 
  
    return 0; 
} 
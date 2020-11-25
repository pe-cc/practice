#include <stdbool.h>
#include <string.h>

#include "defines.h"
#include "countIslands.h"

// check all neighbors 
static void check(int M[][COL], int row, int col, bool checked[][COL]) 
{ 
    //index magic
    static int rowIdx[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colIdx[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
  
    // Mark this cell as checked 
    checked[row][col] = true; 
  
    // recursively check all neighbours (if unchecked)
    for (int k = 0; k < 8; ++k) {
        int cRow = row + rowIdx[k];
        int cCol = col + colIdx[k];
        if ((cRow >= 0) && (cRow < ROW) && (cCol >= 0) && (cCol < COL) && (M[cRow][cCol] && !checked[cRow][cCol])) 
            check(M, cRow, cCol, checked); 
    }
} 

int countIslands(int M[][COL])
{
    // bool array to mark checked cells
    bool checked[ROW][COL]; 
    memset(checked, 0, sizeof(checked)); 
  
    // Initialize count as 0 and travese through the all cells of 
    // given matrix 
    int count = 0; 
    for (int i = 0; i < ROW; ++i) 
        for (int j = 0; j < COL; ++j) 
            // unchecked cell with value != 0 > new island found 
            if (M[i][j] && !checked[i][j]) 
            { 
                check(M, i, j, checked); 
                ++count; 
            } 
  
    return count; 
}
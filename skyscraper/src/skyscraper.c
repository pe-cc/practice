#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int** SolvePuzzle (int *clues) {
    
    int **outcome = (int**)malloc( SIZE * sizeof(int *) );
    for (int i = 0; i < SIZE; i++)
        outcome[i] = (int*)malloc( SIZE * sizeof(int) );
    
    //Your Solution goes here...
    
    return outcome;
}


/////////////////////////////////////
// Test Driver
/////////////////////////////////////

bool assertEqual(int **puzzle, int expected[4][4]) {
    
    printf("Asserting: solution equals expected => ");
    if (!puzzle || !expected) {
        printf("Invalid or no array provided!\n\n");
        return false;
    }
    
    bool eq = true;
    for (int i=0;i<SIZE&&eq;i++) if (memcmp (puzzle[i], expected[i], SIZE * sizeof (int))) eq = false;
    printf("%s\n\n", (eq ? "True" : "False"));
    return eq;
}

bool doTests()
{
    int clues[][16] = {
        { 2, 2, 1, 3,  
          2, 2, 3, 1,  
          1, 2, 2, 3,  
          3, 2, 1, 3 },
        { 0, 0, 1, 2,   
          0, 2, 0, 0,   
          0, 3, 0, 0, 
          0, 1, 0, 0 }
        };

    int outcomes[][4][4] = {
    { { 1, 3, 4, 2 },       
      { 4, 2, 1, 3 },       
      { 3, 4, 2, 1 },
      { 2, 1, 3, 4 } },
    { { 2, 1, 4, 3 }, 
      { 3, 4, 1, 2 }, 
      { 4, 2, 3, 1 }, 
      { 1, 3, 2, 4 } }
    };
    
    bool eq = true;
    eq &=assertEqual(SolvePuzzle(clues[0]), outcomes[0]);
    eq &=assertEqual(SolvePuzzle(clues[1]), outcomes[1]);
    return eq;
}

int main() {
    printf("\nCommencing Tests...\n\n");
    bool passed = doTests();
    printf("\nOverall result: %s\n", passed ? "Passed" : "Failed");
    return 0;
}

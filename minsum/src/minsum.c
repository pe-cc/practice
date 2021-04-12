#include <stdio.h>
#include <stdbool.h>

int minSum(int passed[], int passed_size) {
    
    //Enter solution here
    return 0; 
}

////////////////////////////////////////////
//Test Driver
////////////////////////////////////////////
bool assertEqual(int v1, int v2) {
    
    bool equal = v1 == v2;
    printf("Asserting: %d == %d => %s\n", v1, v2, (equal ? "True" : "False"));
    return equal;
}

bool doTests() {
    
    bool passed = true;
    passed &=assertEqual(minSum((int[]){5,4,2,3}, 4), 22);
    passed &=assertEqual(minSum((int[]){12,6,10,26,3,24}, 6), 342);
    passed &=assertEqual(minSum((int[]){9,2,8,7,5,4,0,6}, 8), 74);
    return passed;
}

int main() {
    printf("\nCommencing Tests...\n\n");
    bool passed = doTests();
    printf("\nOverall result: %s\n", passed ? "Passed" : "Failed");
    return 0;
}

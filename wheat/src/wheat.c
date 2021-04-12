#include <stdio.h>
#include <stdbool.h>

long long *wheatFromChaff(const long long *values, unsigned count) {
    
    // Your Code goes Here .. Enjoy !!
    return 0;
}


/////////////////////////////////////
// Test Driver
/////////////////////////////////////

void printArray(const long long *values, unsigned count) {
    printf("[ ");
    for (int i=0;i<count;i++) printf("%s%lld", (i ? ", " : ""), values[i]);
    printf("]");
}

bool assertEqual(const long long *v1, const long long *v2, unsigned count) {
    
    printf("Asserting: arr1 equals arr2\n");
    if (!v1 || !v2) {
        printf("Invalid or no array provided!\n\n");
        return false;
    }
    
    bool eq = true;
    printf(" - arr1: "); printArray(v1, count);
    printf("\n - arr2: "); printArray(v2, count);
    for (int i=0;i<count&&eq;i++) eq &= (v1[i] == v2[i]);
    printf("\nResult: %s\n\n", (eq ? "True" : "False"));
    return eq;
}

bool doTests()
{
    bool eq = true;
    eq &=assertEqual(wheatFromChaff((long long[]){-3,4,-10,2,-6}, 5), (long long[]){-3,-6,-10,2,4}, 5);
    eq &=assertEqual(wheatFromChaff((long long[]){2,-6,-4,1,-8,-2}, 6), (long long[]){-2,-6,-4,-8,1,2}, 6);
    eq &=assertEqual(wheatFromChaff((long long[]){-31,-5,11,-42,-22,-46,-4,-28}, 8), (long long[]){-31,-5,-28,-42,-22,-46,-4,11}, 8);
    eq &=assertEqual(wheatFromChaff((long long[]){46,39,-45,-2,-5,-6,-17,-32,17}, 9), (long long[]){-32,-17,-45,-2,-5,-6,39,46,17}, 9);
    eq &=assertEqual(wheatFromChaff((long long[]){-9,-8,-6,-46,1,-19,44}, 7), (long long[]){-9,-8,-6,-46,-19,1,44}, 7);
    eq &=assertEqual(wheatFromChaff((long long[]){-46,-17,-48,-5,-21}, 5), (long long[]){-46,-17,-48,-5,-21}, 5);
    eq &=assertEqual(wheatFromChaff((long long[]){-38,-46,-19,-50,-3,-6}, 6), (long long[]){-38,-46,-19,-50,-3,-6}, 6);
    eq &=assertEqual(wheatFromChaff((long long[]){3,6,24,46,42,18}, 6), (long long[]){3,6,24,46,42,18}, 6);
    eq &=assertEqual(wheatFromChaff((long long[]){22,43,50,38,33,1,36}, 7), (long long[]){22,43,50,38,33,1,36}, 7);
    return eq;
}

int main() {
    printf("\nCommencing Tests...\n\n");
    bool passed = doTests();
    printf("\nOverall result: %s\n", passed ? "Passed" : "Failed");
    return 0;
}

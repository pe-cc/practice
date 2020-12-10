#include <stdio.h>

#include "romanenc.h"

int main()
{
    int year = 2020;
    printf("Current Year (%d) in Roman literals: %s\n", year, romanenc(year));
    return 0;
}

/////////////////////////////////////////////////////////////////
// To run tests, execute "ceedling test" in the terminal
/////////////////////////////////////////////////////////////////

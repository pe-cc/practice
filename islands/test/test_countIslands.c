#include "unity.h"

#include "defines.h"
#include "countIslands.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_countIslands_KnownBoard(void)
{
    int M[][COL] = { { 1, 1, 0, 0, 1, 0 }, 
                     { 0, 1, 0, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 1 }, 
                     { 1, 1, 0, 1, 0, 1 },
                     { 0, 0, 0, 1, 0, 0 } }; 

    TEST_ASSERT_EQUAL(6, countIslands(M));
}

void test_countIslands_OpenSea(void)
{
    int M[][COL] = { { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0, 0 } }; 

    TEST_ASSERT_EQUAL(0, countIslands(M));
}

void test_countIslands_Checkers(void)
{
    int M[][COL] = { { 1, 0, 1, 0, 1, 0 }, 
                     { 0, 1, 0, 1, 0, 1 }, 
                     { 1, 0, 1, 0, 1, 0 }, 
                     { 0, 1, 0, 1, 0, 1 }, 
                     { 1, 0, 1, 0, 1, 0 },
                     { 0, 1, 0, 1, 0, 1 } }; 

    TEST_ASSERT_EQUAL(1, countIslands(M));
}

void test_countIslands_MainLand(void)
{
    int M[][COL] = { { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1 } }; 

    TEST_ASSERT_EQUAL(1, countIslands(M));
}

void test_countIslands_Lake(void)
{
    int M[][COL] = { { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 0, 0, 1, 1 }, 
                     { 1, 0, 0, 0, 0, 1 }, 
                     { 1, 0, 0, 0, 0, 1 }, 
                     { 1, 1, 0, 0, 1, 1 },
                     { 1, 1, 1, 1, 1, 1 } }; 

    TEST_ASSERT_EQUAL(1, countIslands(M));
}

void test_countIslands_LakeIsland(void)
{
    int M[][COL] = { { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 0, 0, 1, 1 }, 
                     { 1, 0, 0, 0, 0, 1 }, 
                     { 1, 0, 0, 2, 0, 1 }, 
                     { 1, 1, 0, 0, 0, 1 },
                     { 1, 1, 1, 1, 1, 1 } }; 

    TEST_ASSERT_EQUAL(2, countIslands(M));
}

#include "unity.h"

#include "romanenc.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_romanenc_sample1(void)
{
    TEST_ASSERT_EQUAL_STRING("I", romanenc(1));
}

void test_romanenc_sample4(void)
{
    TEST_ASSERT_EQUAL_STRING("IV", romanenc(4));
}

void test_romanenc_sample1000(void)
{
    TEST_ASSERT_EQUAL_STRING("M", romanenc(1000));
}

void test_romanenc_sample1990(void)
{
    TEST_ASSERT_EQUAL_STRING("MCMXC", romanenc(1990));
}

void test_romanenc_sample2020(void)
{
    TEST_ASSERT_EQUAL_STRING("MMXX", romanenc(2020));
}

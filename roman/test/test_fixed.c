#include "unity.h"

#include "romanenc.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_romanenc_fixed2(void)
{
    TEST_ASSERT_EQUAL_STRING("II", romanenc(2));
}

void test_romanenc_fixed3(void)
{
    TEST_ASSERT_EQUAL_STRING("III", romanenc(3));
}

void test_romanenc_fixed5(void)
{
    TEST_ASSERT_EQUAL_STRING("V", romanenc(5));
}

void test_romanenc_fixed9(void)
{
    TEST_ASSERT_EQUAL_STRING("IX", romanenc(9));
}

void test_romanenc_fixed10(void)
{
    TEST_ASSERT_EQUAL_STRING("X", romanenc(10));
}

void test_romanenc_fixed11(void)
{
    TEST_ASSERT_EQUAL_STRING("XI", romanenc(11));
}

void test_romanenc_fixed15(void)
{
    TEST_ASSERT_EQUAL_STRING("XV", romanenc(15));
}

void test_romanenc_fixed19(void)
{
    TEST_ASSERT_EQUAL_STRING("XIX", romanenc(19));
}

void test_romanenc_fixed22(void)
{
    TEST_ASSERT_EQUAL_STRING("XXII", romanenc(22));
}

void test_romanenc_fixed1001(void)
{
    TEST_ASSERT_EQUAL_STRING("MI", romanenc(1001));
}

void test_romanenc_fixed2008(void)
{
    TEST_ASSERT_EQUAL_STRING("MMVIII", romanenc(2008));
}

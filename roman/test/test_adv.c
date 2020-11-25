#include "unity.h"

#include "romanenc.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_romanenc_adv1004(void)
{
    TEST_ASSERT_EQUAL_STRING("MIV", romanenc(1004));
}

void test_romanenc_adv1992(void)
{
    TEST_ASSERT_EQUAL_STRING("MCMXCII", romanenc(1992));
}

void test_romanenc_adv2843(void)
{
    TEST_ASSERT_EQUAL_STRING("MMDCCCXLIII", romanenc(2843));
}

void test_romanenc_adv345(void)
{
    TEST_ASSERT_EQUAL_STRING("CCCXLV", romanenc(345));
}

void test_romanenc_adv376(void)
{
    TEST_ASSERT_EQUAL_STRING("CCCLXXVI", romanenc(376));
}

void test_romanenc_adv189(void)
{
    TEST_ASSERT_EQUAL_STRING("CLXXXIX", romanenc(189));
}

#include "unity.h"

#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Side_given_3_2_1_expect_VALID()
{
    checkType sideType = checkNegativeOrZero(2, 2, 1);
	TEST_ASSERT_EQUAL(VALID, sideType);
}

void test_Side_given_2_0_1_expect_INVALID()
{
    checkType sideType = checkNegativeOrZero(2, 0, 1);
	TEST_ASSERT_EQUAL(INVALID, sideType);
}

void test_Side_given_2_0_MINUS1_expect_INVALID()
{
    checkType sideType = checkNegativeOrZero(2, 0, -1);
	TEST_ASSERT_EQUAL(INVALID, sideType);
}

void test_Side_given_MINUS2_5_3_expect_INVALID()
{
    checkType sideType = checkNegativeOrZero(-2, 5, 3);
	TEST_ASSERT_EQUAL(INVALID, sideType);
}
	
void test_TriangleType_given_2_2_1_expect_ISOCELES()
{
    TriangleType type = getTriangleType(2,2,1);
	TEST_ASSERT_EQUAL(ISOCELES, type);
}

void test_TriangleType_given_12_2_12_expect_ISOCELES()
{
    TriangleType type = getTriangleType(12,2,12);
	TEST_ASSERT_EQUAL(ISOCELES, type);
}

void test_TriangleType_given_9_4_4_expect_ISOCELES()
{
    TriangleType type = getTriangleType(9,4,4);
	TEST_ASSERT_EQUAL(ISOCELES, type);
}

void test_TriangleType_given_1_1_1_expect_EQUILATERAL()
{
    TriangleType type = getTriangleType(1,1,1);
	TEST_ASSERT_EQUAL(EQUILATERAL, type);
}

void test_TriangleType_given_12_43_1_expect_SCALENE()
{
    TriangleType type = getTriangleType(12,43,1);
	TEST_ASSERT_EQUAL(SCALENE, type);
}

void test_TriangleType_given_0_0_0_expect_UNKNOWN()
{
    TriangleType type = getTriangleType(0,0,0);
	TEST_ASSERT_EQUAL(UNKNOWN, type);
}

void test_TriangleType_given_2_1_0_expect_UNKNOWN()
{
    TriangleType type = getTriangleType(2,1,0);
	TEST_ASSERT_EQUAL(UNKNOWN, type);
}

void test_TriangleType_given_MINUS1_2_3_expect_UNKNOWN()
{
    TriangleType type = getTriangleType(-1,2,3);
	TEST_ASSERT_EQUAL(UNKNOWN, type);
}

void test_TriangleType_given_4_2_MINUS2_expect_UNKNOWN()
{
    TriangleType type = getTriangleType(4,2,-2);
	TEST_ASSERT_EQUAL(UNKNOWN, type);
}

void test_TriangleType_given_4_0_MINUS2_expect_UNKNOWN()
{
    TriangleType type = getTriangleType(4,0,-2);
	TEST_ASSERT_EQUAL(UNKNOWN, type);
}
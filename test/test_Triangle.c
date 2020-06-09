#include "unity.h"
#include "CException.h"
#include "Triangle.h"


CEXCEPTION_T ex;


void setUp(void)
{
}

void tearDown(void)
{
}

/*
void test_Side_given_3_2_1_expect_VALID()
{
    checkType sideType = checkNegativeOrZero(3, 2, 1);
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
*/
	
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

void test_TriangleType_given_0_0_0_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(0,0,0);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		printf("Here is an error: 0x%x INVALID SIDE LENGTH", ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH,ex);
	}
}

void test_TriangleType_given_2_1_0_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(2, 1, 0);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		printf("Here is an error: 0x%x INVALID SIDE LENGTH", ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH,ex);
	}
}

void test_TriangleType_given_MINUS1_2_3_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(-1, 2, 3);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		printf("Here is an error: 0x%x INVALID SIDE LENGTH", ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH,ex);
	}
}

void test_TriangleType_given_4_2_MINUS2_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(4,2,-2);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		printf("Here is an error: 0x%x INVALID SIDE LENGTH", ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH,ex);
	}
}

void test_TriangleType_given_4_0_MINUS2_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(4,0,-2);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		printf("Here is an error: 0x%x INVALID SIDE LENGTH", ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH,ex);
	}
}

//		FUNCTION_NAME ----INPUTS--------
void test_TriangleType_given_minus_1_1_1_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
	Try
	{
    TriangleType type = getTriangleType(-1,1,1);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		printf("Here is an error: 0x%x INVALID SIDE LENGTH", ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH,ex);
	}
}
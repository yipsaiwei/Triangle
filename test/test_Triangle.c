#include "unity.h"
#include "Exception.h"
#include "CException.h"
#include "Triangle.h"
#include <malloc.h> 
#include <stdarg.h>

CEXCEPTION_T ex;


void setUp(void)
{
}

void tearDown(void)
{
}

int multiply (int valA, int valB)
{
	if (valB<0){
		//Throw(ERROR_NEGATIVE_VALUE);
		throwException(ERROR_NEGATIVE_VALUE,NULL, 0, "The operand valB cannot be negative: %d", valB);
	}
	if (valA<0){
		//Throw(ERROR_NEGATIVE_VALUE);
		throwException(ERROR_NEGATIVE_VALUE,NULL, 0, "The operand valA cannot be negative: %d", valA);
	}
	return valA*valB;
}

int addAndMultiplyPositives(int val1, int val2, int val3)
{
	//CEXCEPTION_T ex;
	//Try{
	//return multiply(val1+val2, val3);
	//}Catch(ex)
	//{
	//	printf("exception103933493addAndMultiplyPositives:0x%x\n",ex);
	//	Throw(ex);
	//}
	if(0)
		throwException(ERROR_INVALID_LENGTH, NULL, 0, "The operand has invalid length");
	return multiply(val1+val2, val3);
}

/*
void print(int count,...){
	int i;
	va_list va;
	va_start(va, count);
	for (i=0; i<count; i++){					//va_arg is a macro
		print("%d", va_arg(va, int));
	}
	va_end(va);
	printf("/n");
}
*/

/*
void xtest_print(){
	print(5, 1, 56, -34, 965);
}
*/

void test_addAndMultiplyPositives_expectxxx()
{
	Try{
	int result=addAndMultiplyPositives(3, -4, 5);
	TEST_FAIL_MESSAGE("EXPECT ERROR_NEGATIVE_VALUE_to_be_thrown, BUT UNRECEIVED");
	}Catch(ex)
	{
		//printf("exception103933493test_addAndMultiplyPositives_expectxxx:0x%x\n",ex);
		//printf("%s (%d)\n", ex->message, ex->errorCode);
		dumpException(ex);
		TEST_ASSERT_EQUAL(ERROR_NEGATIVE_VALUE, ex->errorCode);
		freeException(ex);
	}
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
		dumpException(ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}

void test_TriangleType_given_2_1_0_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(2, 1, 0);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}

void test_TriangleType_given_MINUS1_2_3_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(-1, 2, 3);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}

void test_TriangleType_given_4_2_MINUS2_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(4,2,-2);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}

void test_TriangleType_given_4_0_MINUS2_expect_ERROR_INVALID_LENGTH_to_be_thrown()
{
    Try
	{
    TriangleType type = getTriangleType(4,0,-2);
	TEST_FAIL_MESSAGE("EXPECT ERROR_INVALID_LENGTH_to_be_thrown, BUT UNRECEIVED");
	} Catch(ex){
		dumpException(ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH, ex->errorCode);
		freeException(ex);
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
		dumpException(ex);
		TEST_ASSERT_EQUAL(ERROR_INVALID_LENGTH, ex->errorCode);
		freeException(ex);
	}
}
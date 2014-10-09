#include "unity.h"
#include "BinarySearch.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_binarySearch_given_array_3_elements_with_target_3_should_return_0(void)
{
	int array[] = {3,4,5};
	int result;
	
	result = binarySearch(3, array, 0, 2);
	TEST_ASSERT_EQUAL(0, result);
	TEST_ASSERT_EQUAL(3, array[result]);
}


void test_binarySearch_given_array_3_elements_with_target_5_should_return_2(void)
{
	int array[] = {3,4,5};
	int result;
	
	result = binarySearch(5, array, 0, 2);
	TEST_ASSERT_EQUAL(2, result);
	TEST_ASSERT_EQUAL(5, array[result]);
}


void test_binarySearch_given_array_4_elements_with_target_5_should_return_0(void)
{
	int array[] = {3,4,5,6};
	int result;
	
	result = binarySearch(5, array, 0, 3);
	TEST_ASSERT_EQUAL(2, result);
	TEST_ASSERT_EQUAL(5, array[result]);
}


void test_binarySearch_given_array_4_elements_with_target_3_should_return_0(void)
{
	int array[] = {3,4,5,6};
	int result;
	
	result = binarySearch(3, array, 0, 3);
	TEST_ASSERT_EQUAL(0, result);
	TEST_ASSERT_EQUAL(3, array[result]);
}


void test_binarySearch_given_array_7_elements_with_target_10_should_return_4(void)
{
	int array[] = {2,4,6,8,10,12,14};
	int result;
	
	result = binarySearch(10, array, 0, 6);
	TEST_ASSERT_EQUAL(4, result);
	TEST_ASSERT_EQUAL(10, array[result]);

}


void test_binarySearch_given_array_7_elements_with_target_4_should_return_4(void)
{
	int array[] = {2,4,6,8,10,12,14};
	int result;
	
	result = binarySearch(4, array, 0, 6);
	TEST_ASSERT_EQUAL(1, result);
	TEST_ASSERT_EQUAL(4, array[result]);

}
#include "BinarySearch.h"
#include <stdio.h>

//return index of the target
int binarySearch(int target, int array[], int startIndex, int endIndex)
{
	int half_index;
	half_index = (endIndex + startIndex)/2;
		
	if( target == array[half_index] )
		return half_index;
	else if( startIndex == endIndex)
		return -1;
	else if( target > array[half_index])
		half_index = binarySearch(target, array, half_index+1, endIndex);
	else 
		half_index = binarySearch(target, array, startIndex, half_index-1);
		
}
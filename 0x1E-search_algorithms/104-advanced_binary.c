#include "search_algos.h"

/**
 * advanced_binary - basic binary search does not necessarily
 * return the index of the first value in the array (if this
 * value appears more than once in the array). In this method,
 * i’ll have to solve this problem.
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return:  the index where value is located
 * assuming that array will be sorted in ascending order
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_ex(array, value, 0, (int)size - 1));
}


/**
 * binary_search_ex -  searches for a value in a sorted array
 * of integers using the Binary search algorithm but it's
 * a helper for the advanced_binary_search algorithm
 * @array: pointer to the first element of the array to search in
 * @value:  the value to search for
 * @first: start index of the subarray
 * @last: last index of the subarray
 * Return:  the index where value is located
 * You can assume that array will be sorted in ascending order
 * You can assume that value won’t appear more than once in array
 * If value is not present in array or if array is NULL, your
 * function must return -1
 * int binary_search(int *array, size_t size, int value)
 */

int binary_search_ex(int *array, int value, int first, int last)
{
	int i, mid;
	int last_idx = last;
	int first_idx = first;

	if (array == NULL)
		return (-1);

	if (first_idx <= last_idx)
	{
		printf("Searching in array:");
		for (i = first_idx; i <= last_idx; i++)
		{
			printf(" %i", array[i]);
			if (i != last_idx)
				printf(",");
		}
		printf("\n");

		mid = (int)((first_idx + last_idx) / 2);

		if (value > array[mid])
			return (binary_search_ex(array, value, mid + 1, last_idx));
		if (value < array[mid])
			return (binary_search_ex(array, value, first_idx, mid - 1));
		else
		{
			if (value == array[mid - 1])
				return (binary_search_ex(array, value, first_idx, mid));
			else
				return (mid);
		}
	}
	return (-1);
}

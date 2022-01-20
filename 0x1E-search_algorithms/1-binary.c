#include "search_algos.h"


/**
 * binary_search -  searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value:  the value to search for
 * Return:  the index where value is located
 * You can assume that array will be sorted in ascending order
 * You can assume that value won’t appear more than once in array
 * If value is not present in array or if array is NULL, your
 * function must return -1
 * int binary_search(int *array, size_t size, int value)
 */

int binary_search(int *array, size_t size, int value)
{
	int i, mid;
	int last_idx = (int)size - 1;
	int first_idx = 0;

	if (array == NULL)
		return (-1);

	while (first_idx <= last_idx)
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
			first_idx = mid + 1;
		else if (value < array[mid])
			last_idx = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * You can assume that array will be sorted in ascending order
 * If value is not present in array or if array is NULL, your
 * function must return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
						* (value - array[low]));

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
	{
		if (pos >= size)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			  * (value - array[low]));
	}
	if (pos >= size)
	{
		printf("Value checked array[%li] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
	if (value == array[low])
		return (low);
	else
		return (-1);
}

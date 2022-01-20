#include "search_algos.h"
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 * You can assume that array will be sorted in ascending order
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	int step = 0;
	int prev = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%i] = [%i]\n", step, array[step]);
		prev = step;
		step += (int)(sqrt(size));
		if (prev >= (int)size)
			return (-1);
	}

	printf("Value found between indexes [%i] and [%i]\n", prev, step);

	if (step > (int)(size - 1))
		step = (int)size - 1;

	for (i = prev; i <= step && array[i] <= value; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

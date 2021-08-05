#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: number
 * @index: bit index
 *
 * Return: returns the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}

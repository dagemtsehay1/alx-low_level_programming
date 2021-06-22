#include "holberton.h"
/**
 * times_table - Print 9 times table
 *
 * Return: Void.
 */

void times_table(void)
{
	int x, y, multiplied_value;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			multiplied_value = x * y;
			if (x == 0)
			{
				_putchar(multiplied_value + '0');
			}
			else if (multiplied_value >= 10)
			{
				_putchar(' ');
				_putchar(multiplied_value / 10 + '0');
				_putchar(multiplied_value % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplied_value + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

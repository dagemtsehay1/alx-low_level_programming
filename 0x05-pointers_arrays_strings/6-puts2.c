#include "holberton.h"

/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */

void puts2(char *str)
{
	int i, j = 0;
	char c;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
	  c = str[j];
		_putchar(c);
		j = j + 2;
	}
	_putchar('\n');
}

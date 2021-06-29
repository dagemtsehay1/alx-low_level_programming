#include "holberton.h"

/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */

void puts2(char *str)
{
int i, len = 0;
while (str[i] != '\0')
{
len += 1;
}
for (i = 0; i <= len ; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

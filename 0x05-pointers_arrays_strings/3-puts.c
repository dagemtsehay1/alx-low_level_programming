#include "holberton"
/**
 * _puts - main
 * @str: pointer
 * Return: no return
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

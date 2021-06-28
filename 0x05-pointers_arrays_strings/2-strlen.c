#include "holberton.h"
/**
 * _strlen - main
 * @s: pointer
 * Return: string length
 */

int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
s++;
l += 1;
}
return (l);
}

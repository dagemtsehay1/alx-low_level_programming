#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == Null)
exit(98);
return (ptr);
}

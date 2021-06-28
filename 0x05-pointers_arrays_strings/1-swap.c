#include "holberton.h"
/**
 * Swap_int - swap two numbers
 *
 * Returns: Always 0
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}

#include "main.h"
#include <stdint.h>
/**
 * get_endianness - checks the endianness.
 *
 * Return: void
 */

int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *)&x;

	return (*c == 0x10);
}

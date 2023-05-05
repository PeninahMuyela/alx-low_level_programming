#include "main.h"

/**
 * get_endianness - a function that checks endianness
 * Return: 0 (Big Endian), 1 (Little Endian)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

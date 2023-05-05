#include "main.h"

/**
 * set_bit - a function setting the value of a bit to 1 at a given index
 * @n: pointer to the number to set
 * @index: index of the bit set to 1
 *
 * Return: 1 (success), -1 (failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

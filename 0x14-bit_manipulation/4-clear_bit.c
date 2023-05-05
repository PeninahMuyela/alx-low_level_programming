#include "main.h"

/**
 * clear_bit - a function setting the value of a bit to 0 at a given index
 * @n: pointer to the number changed
 * @index: index of the bit set to 0
 *
 * Return: 1 (success), -1 (failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

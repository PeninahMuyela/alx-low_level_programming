#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer to get bit value
 * @index: index of the bit
 *
 * Return: value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

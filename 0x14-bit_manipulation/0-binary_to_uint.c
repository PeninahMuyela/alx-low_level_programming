#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int decimal;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{

	if (b[i] == '1')
		decimal = (decimal << 1) | 1;
	else if (b[i] == '0')
		decimal <<= 1;
	else if (b[i] != '0' && b[i] != '1')
		return (0);
	}

	return (decimal);
}

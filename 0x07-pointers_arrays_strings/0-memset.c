#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: destination point
 * @b: constant byte
 * @n: the memory of the byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: destination of string
 * @src: source of string
 * @n: copied number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}

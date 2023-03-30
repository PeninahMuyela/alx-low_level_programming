#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most 'n' bytes from 'src'
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of bytes from 'src' to be used
 *
 * Return: Pointer to resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

/* Find length of destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Append up to 'n' bytes of 'src' to 'dest' */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

/* Add terminating null byte to 'dest' */
dest[dest_len + i] = '\0';

return (dest);
}

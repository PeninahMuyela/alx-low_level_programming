#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: negative value if s1 is less than s2, 0 if s1 and s2 are equal,
 *         or a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && (*s1 == *s2))
{
s1++;
s2++;
}

return (*s1 - *s2);
}

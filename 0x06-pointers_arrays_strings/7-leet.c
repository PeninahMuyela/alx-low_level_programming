#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
char *ptr = str;
char *letters = "aAeEoOtTlL";
char *numbers = "4433007711";

while (*ptr)
{
int i = 0;

while (letters[i])
{
if (*ptr == letters[i])
{
*ptr = numbers[i];
break;
}

i++;
}

ptr++;
}

return (str);
}

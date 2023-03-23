#include "main.h"
/**
 * main - Prints the alphabet in lowercase
 * print_alphabet - Prints the alphabet in lowercase
 * Return: A lways 0 Success
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

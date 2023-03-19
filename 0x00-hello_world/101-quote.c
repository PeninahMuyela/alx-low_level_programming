#include <stdio.h>
#include <unistd.h>
/**
 * main - a C program that prints a line with the standard error
 *
 * return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}

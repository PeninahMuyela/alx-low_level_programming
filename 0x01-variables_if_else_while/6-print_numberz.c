#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints single digit numbers of base 10 from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}


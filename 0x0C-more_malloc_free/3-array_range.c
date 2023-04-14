#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: provides minimum range of values stored
 * @max: provids maximum range of values and number of elements stored
 * Return: the pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		p = malloc(sizeof(int));
		p[0] = min;
	}
	else
	{
		p = malloc(sizeof(int) * (max - min + 1));
		if (p == NULL)
			return (NULL);
		for (i = 0; min <= max; i++, min++)
			p[i] = min;
	}
	return (p);
}

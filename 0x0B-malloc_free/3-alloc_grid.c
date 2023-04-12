#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2-dimensional array of integers
 *
 * @width: width of the 2-dimensional array
 * @height: height of the 2-dimensional array
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i, j, m, n;
	int **twoD;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(height * sizeof(int *));
	if (twoD == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		twoD[i] = malloc(width * sizeof(int));
		if (twoD[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(twoD[j]);
			}
			free(twoD);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			twoD[m][n] = 0;
	}
	return (twoD);
}

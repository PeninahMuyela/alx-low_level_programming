#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: the array to search
 * @size: size of the array
 * @cmp: pointer to the compairing function
 * Return: the index of the first element for which the
 * cmp function does not return 0,  no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}

/* this program searches for an integer */
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - this function searches for an int
 * @array: pointer to an array
 * @size: dimension of array
 * @cmp: pointer tob a function
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((cmp == 0) || (array == 0) || (size <= 0))
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}

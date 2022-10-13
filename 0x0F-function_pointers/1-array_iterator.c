/* this program iterates the element of array */
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - this function iterates an element in an array
 * @array: pointer to a subscript variable
 * @size: number of elements in the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == 0) || (action == 0))
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

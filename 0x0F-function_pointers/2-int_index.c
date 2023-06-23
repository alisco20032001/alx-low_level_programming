#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: array to find the index
 *@size: size of the array
 *@cmp: a function pointer.
 *return: index or -1 if it fails
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
	return (-1);
	for (a = 0; a < size; ++a)
	{
	if (cmp(array[a]))
		return (a);
	}
	return (-1);
}


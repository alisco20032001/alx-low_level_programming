#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates an array
 * @array:  is  the array
 * @size: is the size
 * @action:  is a pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}


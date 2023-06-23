#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 *@array: array to iterate
 *@size: size of the array.
 *@action: this a function pointer.
* Return: sucess 0
 
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action)
	{
	for (a = 0; a < size; a++)
		action(*(array + a));
	}
}

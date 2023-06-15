#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* _realloc - function to reallocates a memory block
* @ptr: is a pointer to memory previously
* llocated with a call to malloc
* @old_size: size of pointer
* @new_size: size ofnew memory to be allocated
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int a, min;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (a = 0; a < min( new_size,old_size); a++)
				*((char *)temp_block + a) = *((char *) ptr + a);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}

#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @a: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int a)
{
	int *ptr;

	ptr = malloc(a);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}


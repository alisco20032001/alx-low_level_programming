#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - function that allocates memory for an array, using malloc
*@nmemb: number of elements
*@size: the size of memory block to be allocated
*Return: If nmemb or size is 0, returns NULL
*If malloc fails,  returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			block[a] = 0;
		return (block);
	}
	else
		return (NULL);
}

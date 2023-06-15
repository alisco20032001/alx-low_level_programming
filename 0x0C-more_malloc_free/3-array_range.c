#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - function that creates an array of integers.
* @min: lowest number in the array
* @max: highest value in the array
*
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *block;
	int a, b = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (a = min; a <= max; a++)
		{
			block[b] = a;
			b++;
		}
		return (block);
	}
	else
		return (NULL);

}

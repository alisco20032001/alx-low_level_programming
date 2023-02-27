#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: int to swap 1
 * @b: int to swap 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


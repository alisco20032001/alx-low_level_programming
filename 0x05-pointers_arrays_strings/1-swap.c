#include "main.h"
/**
 * int main - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b);

{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

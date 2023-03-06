#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, a;

	for (i = 0; i < 8; i++)
	{
		for (a = 0; j < 8; a++)
		{
			if (a == 7)
			{
				_putchar(a[i][a]);
				_putchar('\n');
			}
			else
				_putchar(a[i][a]);
		}
	}
}

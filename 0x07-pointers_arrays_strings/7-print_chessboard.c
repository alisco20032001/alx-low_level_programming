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
	int i, m;

	for (i = 0; i < 8; i++)
	{
		for (m = 0; m < 8; m++)
		{
			if (m == 7)
			{
				_putchar(a[i][m]);
				_putchar('\n');
			}
			else
				_putchar(a[i][m]);
		}
	}
}

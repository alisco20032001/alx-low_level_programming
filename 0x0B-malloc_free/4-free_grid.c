#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created 
 *@grid: rows of grid
 *@height:height of grid
 * Return: pointer to a 2 dimens array of int;null
 */
void free_grid(int **grid, int height)
{
	int a;
	int *p;

	for (a = 0; a < height; a++)
	{
		p = grid[a];
		free(p);
	}
	free(grid);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - rogram should print the result of the multiplication, followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, a;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = 1;

		for (i = 1; i < 3; i++)
			a *= atoi(argv[i]);

		printf("%d\n", a);
	}

	return (0);
}

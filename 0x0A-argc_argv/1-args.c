#include <stdio.h>


/**
 * int main - a program that prints its name, followed by a new line
 * @argc: number of argument
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (j = 0; *argv; j++, argv++)
			;

		printf("%d\n", j - 1);
	}

	return (0);
}

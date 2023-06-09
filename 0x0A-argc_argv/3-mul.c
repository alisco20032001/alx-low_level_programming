#include <stdio.h>


/**
 * main - a program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array name
 * Return: If the program does not receive two arguments,
           print Error, otherwise 1 
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;

		for (a = 1; a < 3; a++)
			b *= atoi(argv[a]);

		printf("%d\n", b);
	}

	return (0);
}

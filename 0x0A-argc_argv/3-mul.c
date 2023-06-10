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
	int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}

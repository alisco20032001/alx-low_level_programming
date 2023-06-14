#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: arg count
 * @argv: arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			length = strlen(ptr);

			for (b = 0; b < length; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[a]);
		}

	printf("%d\n", sum);
	}
	return (0);
}

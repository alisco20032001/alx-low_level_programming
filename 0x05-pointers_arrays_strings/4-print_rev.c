#include "main.h"

/**
 * print_rev -  function that prints a string,
 * in reverse
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int longi = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		longi++;
	}

	for (n = (longi - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}


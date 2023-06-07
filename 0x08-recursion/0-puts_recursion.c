#include "stdio.h"

/**
 * _puts_recursion - this is a function that Prints a
 * string followed by a new line
 * @s: string
 *
 * Return: success 1.
 * On error, -1 is returned, and errno is set appr.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

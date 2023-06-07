#define "main.h"

/**
 * _puts_recursion - this is a function that Prints a
 * string followed by a new line
 * @s: a string
 * Return: always 0 on success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	else
		_putchar('\n');
}

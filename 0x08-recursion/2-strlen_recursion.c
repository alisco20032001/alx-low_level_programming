#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 *
 * Return: 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*str != '\0')
	{
		return (1 + _strlen_recursion(str + 1));
	}
	return (0);
}

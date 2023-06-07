#include "main.h"

/**
 * palind2 - function that obtains length of x
 * @x: string
 * @l: integer to count length
 * Return: always On success 0
 */
int palind2(char *x, int l)
{
	if (*x == 0)
		return (l - 1);
	return (palind2(x + 1, l + 1));
}
/**
 * palind3 - function that compares string vs string reverse
 * @x: string
 * @l: integer to count length
 * Return: On success 0
 */

int palind3(char *x, int l)
{
	if (*x != *(x + l))
		return (0);
	else if (*x == 0)
		return (1);
	return (palind3(x + 1, l - 2));
}
/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success 0.
 */

int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}

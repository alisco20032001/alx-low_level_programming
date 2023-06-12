#include "main.h"
/**
 * _memset - function that fill a block of memory with a specific value
 * @s: starting address of memory to filled
 * @b: the desired value
 * @n: no of bytes to changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

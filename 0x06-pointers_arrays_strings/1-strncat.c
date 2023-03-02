#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenates
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	i = 0;
	a = 0;

	while (dest[i] != '\0')
		i++;

	while (src[a] != '\0' && a < n)
	{
		dest[i] = src[a];
		i++;
		a++;
	}

	dest[i] = '\0';

	return (dest);
}

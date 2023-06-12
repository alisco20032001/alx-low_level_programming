#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest: input no
 * @src: input no
 * @n: input no
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		j++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}

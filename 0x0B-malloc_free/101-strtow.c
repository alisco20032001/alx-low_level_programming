#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - function that splits a string into words.
 *@str: string
 *@av: arguments
 * Return: a pointer to a string
 */
char **strtow(char *str)
{
	int a, b, c, n, count, m, wordf;
	char **p;
	char *x;

	a = 0;
	b = 0;
	c = 0;
	count = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ' && (str[a + 1] != ' ' || str[a + 1] == '\0'))
			a++;
	}
	p = (char **)malloc((a + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (wordf = 0; str[wordf] && b <= w; wordf++)
	{
		count = 0;
		if (str[wordf] != ' ')
		{
			for (a = wordf ; str[a] != '\0'; i++)
			{
				if (str[a] == ' ')
					break;
				count++;
			}
			*(p + b) = (char *)malloc((count + 1) * sizeof(char));
			if (*(p + b) == NULL)
			{
				for (n = 0; n <= b; n++)
				{
					x = p[n];
					free(x);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; wordf < a; wordf++)
			{
				p[b][m] = str[wordf];
				m++;
			}
			p[b][m] = '\0';
			b++;
		}
	}
	p[b] = NULL;
	return (p);
}

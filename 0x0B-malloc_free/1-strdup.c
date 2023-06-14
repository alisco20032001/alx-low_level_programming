#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to
 * a new string which is a duplicate of the string
 *@str: string to duplicate
 * Return: On success,  function returns a pointer to the
 * duplicated string  or NULL
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int a;
	int b;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
		;
	strnew = (char *)malloc(b + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (a = 0; str[a] != '\0'; a++)
			strnew[i] = str[a];
	} else
	{
		return (NULL);
	}
	strnew[a] = '\0';
	return (strnew);
}

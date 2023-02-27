#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, s = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		s++;
		pl = s[i++];
	}
	return (s);
}


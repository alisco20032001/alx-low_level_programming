#include "main.h"

/**
 * cap_string - function that capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, m;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (m = 0; m < 13; m++)
		{
			if (s[i] == spe[m])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s)
}

#include "main.h"
/**
 * _strstr - function
 * @haystack: input
 * @needle: input
 * Return:  always on success 0 
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *m = needle;

		while (*n == *p && *m != '\0')
		{
			n++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);
}



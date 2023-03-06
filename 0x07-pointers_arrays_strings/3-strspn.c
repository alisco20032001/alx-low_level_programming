#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: segment to return bytes 
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, a;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (a = 0; accept[a] != '\0'; a++)
			{
				if (s[i] == accept[a])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}

#include "main.h"
/**
 *_memcpy -  function that copies memory area
 *@dest: memory  stored
 *@src: memory copied
 *@n: nos of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int m = n;

	for (; m < a; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}


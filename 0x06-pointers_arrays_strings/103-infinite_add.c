#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer 
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int a = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (a = 0; a < i; a++, i--)
	{
		temp = *(n + a);
		*(n + a) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text rep of 1st number to add
 * @n2: text rep of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, a = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + a) != '\0')
		a++;
	i--;
	a--;
	if (a >= size_r || i >= size_r)
		return (0);
	while (a >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (a < 0)
			val2 = 0;
		else
			val2 = *(n2 + a) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		a--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

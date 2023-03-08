#include "main.h"

/**
 * sqrt2 - function that returns the natural square root of a number.
 * @j: same number as n
 * @m: number that iterates from 1 to n
 *
 * Return: 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int j, int m)
{
	if (m * m == j)
		return  (m);
	else if (m * m > j)
		return (-1);
	return (sqrt2(j, m + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return:  1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

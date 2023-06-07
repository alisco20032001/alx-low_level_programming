#include "main.h"

/**
 * sqrt2 - function that returns the natural square root of a number
 * @x: the same number use in place of n
 * @y: number that iterates from 1 to n
 * Return: always On success 1.
 */
int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt2(x, y + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Number Integer
 * Return: always On success 1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

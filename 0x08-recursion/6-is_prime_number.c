#include "main.h"

/**
 * prime2 - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @a: same number as n
 * @m: number that iterates from 1 to n
 *
 * Return: 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime2(int a, int m)
{
	if (a == m)
		return (1);
	else if (a % m == 0)
		return (0);
	return (prime2(a, m + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}

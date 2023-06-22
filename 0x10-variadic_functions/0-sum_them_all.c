#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all -function that returns the sum of all its parameters.
 * @n: number of argu
 * Return:  0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int a;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}

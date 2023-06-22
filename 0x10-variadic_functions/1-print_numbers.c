#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: no of argu
 *@separator: number of parameters
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int a;

	a = 0;

	va_start(num, n);
	while (a < n)
	{
		printf("%d", va_arg(num, unsigned int));
		if (a < (n - 1) && separator != NULL)
			printf("%s", separator);
		a++;
	}
	va_end(num);
	printf("\n");
}

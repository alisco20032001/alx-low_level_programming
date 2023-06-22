#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - function that prints anything
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: no of argu in char format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int a= 0, b = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[b])
		b++;

	while (format && format[a])
	{
		if (a  == (b - 1))
		{
			sep = "";
		}
		switch (format[a])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		a++;
	}
	printf("\n");
	va_end(valist);
}

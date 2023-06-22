#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>


/**
 * struct args_t - function that contain the type 
 * @formatvo: format to print
 * @f: functions that prints
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

typedef struct format

{
	char *format;
	void (*f)(va_list all);
} f;



#endif

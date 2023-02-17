#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));

#include "main.h"

/**
 * _isalpha - function that print checks for alphabetic character
 * @c: the char to  checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}



#include "main.h"

/**
* _islower - to check if the character is lowercase
* @c: is the character to be check
* Return: 1 if the character is lowercase, otherwise o
*/

int  _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

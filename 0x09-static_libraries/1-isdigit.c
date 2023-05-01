#include "main.h"

/**
 * _isdigit - functions checks if input is a digit
 *
 * @c: input takes 
 *
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

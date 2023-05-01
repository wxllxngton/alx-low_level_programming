#include "main.h"

/**
 * _isupper - function checks for uppercase letters
 *
 * @c: input
 *
 * Return: 1 if uppercase, else 0 
 */

int _isupper(int c)
{
	char i;
	int low = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			low = 1;
	}
	return (low);
}

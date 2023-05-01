#include "main.h"

/**
 * _memset - function files memory with constant byte
 *
 * @s: input string
 * @b: input character
 * @n: number of bytes
 *
 * Return: string with constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *x = s;

	while (n--)
	{
		*x++ = b;
	}

	return (s);
}

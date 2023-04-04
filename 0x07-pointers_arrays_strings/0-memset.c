#include "main.h"

/**
 * _memset: files memory with constant byte
 *
 * @s: input string
 * @b: input character
 * @n: number of bytes
 *
 * Return: strings with constant byte
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

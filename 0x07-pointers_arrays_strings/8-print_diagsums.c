#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints sum of two diagonals
 * of a square matrix of integers
 *
 * @a: input digit(s)
 * @size: input size
 *
 * Return: result of sum
 */

void print_diagsums(int *a, int size)
{
  int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}

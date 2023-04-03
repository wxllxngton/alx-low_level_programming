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
  int row = 0, col;
  int d1 = 0, d2 = 0;
  for (row; row < size; row++)
  {
      d1 += a[row*size + row];
      d2 += a[row*size + size - row - 1];
  }
  printf("%d, %d\n", d1, d2);
}

#include "main.h"
int _sqrt(int prev, int n);

/**
 * _sqrt_recursion - function returns natural
 * square root of a number
 *
 * @n: input integer
 *
 * Return: sqrt of the input
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - function finds square root
 *
 * @prev: previous val
 * @n: sqrt value
 *
 * Return: square root of n
 */

int _sqrt(int prev, int n)
{
	if (prev > n)
		return (-1);
	else if (prev * prev == n)
		return (prev);
	return (_sqrt(prev + 1, n));
}

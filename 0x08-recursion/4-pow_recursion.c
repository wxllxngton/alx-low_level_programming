#include "main.h"

/**
 * _pow_recursion - function returns x^y
 *
 * @x: input integer
 * @y: input integer acting as power
 *
 * Return: result x^y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}

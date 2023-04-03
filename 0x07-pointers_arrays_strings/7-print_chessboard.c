#include "main.h"

/**
 * print_chessboard - function prints a chessboard
 *
 * @a: input array
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int row = 0, col;

	for (row; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}

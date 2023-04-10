#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies 2 numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
}

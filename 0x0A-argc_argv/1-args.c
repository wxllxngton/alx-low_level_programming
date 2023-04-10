#include <stdio.h>

/**
 * main - function prints the number of arguments passed into it.
 *
 * @argc: length of arguments array
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}


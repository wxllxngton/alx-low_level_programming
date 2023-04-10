#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: length of arguments array
 * @argv: argument vector containing program arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

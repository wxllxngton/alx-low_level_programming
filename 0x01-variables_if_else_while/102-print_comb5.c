#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s, t;

	for (s = 0; s <= 98; s++)
	{
		for (t = s + 1; t <= 99; t++)
		{
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');
			putchar(' ');
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');

			if (s == 98 && t == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

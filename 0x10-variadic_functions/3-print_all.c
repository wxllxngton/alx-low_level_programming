#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 *
 * @format: a list of type of args passed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list argsp;
	char *tmp;
	int i = 0;

	va_start(argsp, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(argsp, int));
				break;
			case 'i':
				printf("%d", va_arg(argsp, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(argsp, double));
				break;
			case 's':
				tmp = va_arg(argsp, char*);
				if (tmp != NULL)
				{
					printf("%s", tmp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(argsp);
	printf("\n");
}

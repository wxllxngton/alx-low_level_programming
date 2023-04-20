#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prints string followed by a newline
 *
 * @separator: input strings separating vals
 * @n: number of parameters
 * @..: other parameters
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;

    int counter = 0;

    va_start(ap, n);
    for (; counter < n; counter++)
    {
        char *arg = va_arg(ap, char *);
        if (arg != NULL)
            printf("%s", arg);
        else
            printf("nil");

        if (separator != NULL && (counter + 1) != n)
            printf("%s", separator);
    }

    va_end(ap);

    printf("\n");
}

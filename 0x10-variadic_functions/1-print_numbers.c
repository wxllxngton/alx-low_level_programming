#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers followed by newline
 *
 * @separator: input string separating numbers
 * @n: number of parameters
 * @...: other parameters
 *
 * Return: all numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;

    unsigned int counter = 0;
    int argV;
    
    va_start(ap, n);
    for (; counter < n; counter++)
    {
        argV = va_arg(ap, int)
        printf("%d", argV);
        if (separator == NULL)
            continue;
        if (counter < n - 1)
            printf("%s", separator);
    }
    
    printf("\n");
    va_end(ap);
}

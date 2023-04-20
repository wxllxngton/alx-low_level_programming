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
    
    int counter = 0;
    
    va_start(ap, n);
    for (; counter < n; counter++)
    {
        printf("%d", va_arg(ap, int));
        if (separator != NULL && (counter + 1) != n)
            printf("%s", separator);
    }
    
    va_end(ap);
    
    printf("\n");
}

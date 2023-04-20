#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sums all parameters
 *
 * @n: number of parameters
 * @...: other parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    
    int sum = 0, counter = 0;
    
    if (n == 0)
        return (0);
        
    va_start(ap, n);
    for (; counter < n; counter++)
        sum += va_arg(ap, int);
    
    va_end(ap);
    return (sum);
}

#include "main.h"

/**
 * puts2 - function prints every character of a string
 *
 * @str: input string
 *
 * Return: nothing
 */

void puts2(char *str)
{
    int counter, n = 0;
    for (counter = 0; str[counter] != '\0'; ++counter);
    
    while (n < counter) 
    {
        _putchar(str[n]);
        n += 2;
    }
    _putchar('\n');
    
}

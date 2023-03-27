#include "main.h"

/**
 * _puts - function prints a string, followed by newline
 * to stdout
 *
 * @str: input string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int n = 0;
  int counter = 0;
  while (str[counter] != '\0') 
  {
    /* Since letters no use of + '0' */
    _putchar(str[counter]);
    counter++;
  }
	_putchar('\n');
}

#include "main.h"

/**
 * _memset - function files memory with constant byte
 *
 * @s: input string
 * @b: input character
 * @n: number of bytes
 *
 * Return: strings with constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
  int counter = 0;
  while (counter < n) 
  {
      s[counter] = b; 
      counter++;
  }

  return (s);
}

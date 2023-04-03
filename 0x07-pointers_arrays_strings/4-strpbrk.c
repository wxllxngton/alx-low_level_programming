#include "main.h"

/**
 * _strpbrk - function searches string for any
 * of a set of bytes
 *
 * @s: input string
 * @accept: input string
 *
 * Return: pointer to byte in input string
 */

char *_strpbrk(char *s, char *accept)
{
  char *x = accept;
  /* printf("%s\n", x); */

  while (*s)
  {
      while (*accept) 
      {
          if (*accept == *s)
          {
              return (s);
          }
          accept++;
      }
      /* Return to accept to 'world' */
      accept = x;
      s++;
  }
  return ('\0');
}

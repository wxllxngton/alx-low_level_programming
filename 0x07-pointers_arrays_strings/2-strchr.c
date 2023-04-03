#include "main.h"

/**
 * _strchr - function locates a character in
 * the string
 *
 * @s: input string
 * @c: input character
 *
 * Return: char being searched for
 */

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
    return NULL;
}

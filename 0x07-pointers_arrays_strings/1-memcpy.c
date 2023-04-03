#include "main.h"

/**
 * _memcpy - function copies memory area
 *
 * @dest: input string
 * @src: input string
 * @n: number of bytes
 *
 * Return: copied string according to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n) 
{
    int counter = 0;
    while (counter < n)
    {
        *(dest + counter) = src[counter];
        counter++;
    }
    return (dest);
}

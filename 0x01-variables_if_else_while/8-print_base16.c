#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;
	int u;

    for (s = 0; s < 10; s++)
        putchar(48 + s);
        
    // 65-90 Upper case letters
    for (s = 65; s < 90; s++)
        if (s >= 'G') 
        {
            break;
        }
        else 
        {
            // Converts to lowercase
            u = tolower(s);
            putchar(u);   
        }

	putchar('\n');

	return (0);
}

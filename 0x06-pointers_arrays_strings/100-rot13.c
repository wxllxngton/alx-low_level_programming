#include "main.h"

/**
 * rot13 - function encodes a string using rot13
 *
 * @s: input string
 *
 * Return: encode string
 */

char *rot13(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
	    char a = 'a';
	    while (a <= 'z')
	    {
		if (s[counter] == a || s[counter] == a - 32)
		{
		    if (s[counter] >= 'a' && s[counter] <= 'z')
		    {
			s[counter] = 'a' + (s[counter] - 'a' + 13) % 26;
		    }
		    else if (s[counter] >= 'A' && s[counter] <= 'Z')
		    {
			s[counter] = 'A' + (s[counter] - 'A' + 13) % 26;
		    }
		    break;
		}
		a++;
	    }
	    counter++;
	}
	return s;

}

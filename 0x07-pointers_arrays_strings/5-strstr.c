#include "main.h"

/**
 * _strstr - function locates a substring
 *
 * @haystack: input string
 * @needle: input string
 *
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
    int x = 0, j = 0;
    
    while (haystack[i] != '\0')
    {
        while (needle[j] && haystack[i] == needle[0]) 
        {
        	if (haystack[i + j] == needle[j]) 
        	{
        	    j++;
        	}
			else 
			{
			    break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else 
		{
		    /** returns a pointer to the start of the substring in 
		     * haystack that matches the needle string.
		     */
		    return (haystack + i);
		}
			
    }
    return (0);
    
}

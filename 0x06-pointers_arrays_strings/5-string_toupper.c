#include "main.h"

/**
 * string_toupper - function converts lowercase letters
 * to uppercase letters
 *
 * @s : input string
 *
 * Return: uppercase letters/strings
 */

char *string_toupper(char *str1)
{
    char ch;
    int counter;
    
    while (str1[counter] != '\0') 
    {
        for(ch ='a'; ch <= 'z'; ch++)
        {
           if (ch == str1[counter]) 
           {
               /* Conversion from lowercase to uppercase ASCII */
               str1[counter] -= 32;
           } 
        }
        counter++;
    }
    return (str1);
}

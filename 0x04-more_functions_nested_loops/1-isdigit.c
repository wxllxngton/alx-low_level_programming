#include "main.h"

/**
 * _isdigit - Check Description
 *
 * @c: input takes
 * Description: functions checks if input is a digit
 * or not
 *
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int isNum = 0;
	for (int i = 48; i < 58; i++) 
	{
		if (i == c)
		{
			isNum = 1;
            		break;
        	}
    	}
    	return (isNum);
}

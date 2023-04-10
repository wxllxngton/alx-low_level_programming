#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**main - program prints min no. of coins
 * to make change
 * 
 * @argc: argument counter
 * @argv: argument vector
 * 
 * Return: 1 if number of args pass, 0 otherwise
 */
 
int main(int argc, char **argv)
{
    int amount, num_coins = 0;
    if (argc == 2)
    {
    	amount = atoi(argv[1]);
    	if (amount < 0)
    	{
    		printf("%d\n", 0);
    		return (0);
    	}
    	if (amount % 25 >= 0)
    	{
    		num_coins += amount / 25;
    		amount = amount % 25;
    	}
    	if (amount % 10 >= 0)
    	{
    		num_coins += amount / 10;
    		amount = amount % 10;
    	}
    	if (amount % 5 >= 0)
    	{
    		num_coins += amount / 5;
    		amount = amount % 5;
    	}
    	if (amount % 2 >= 0)
    	{
    		num_coins += amount / 2;
    		amount = amount % 2;
    	}
    	if (amount % 1 >= 0)
    		num_coins += amount;
    	printf("%d\n", num_coins);
    	return (0);
    }
    else
    {
    	printf("Error\n");
    	return (1);
    }
}

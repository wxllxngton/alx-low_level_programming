#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints minimum number of coins to make change
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if number of args pass, 0 otherwise
 */

int main(int argc, char **argv)
{
    int amount, total_coins = 0;

    if (argc == 2)
    {
        amount = atoi(argv[1]);

        if (amount < 0)
        {
            printf("%d\n", 0);
            return 0;
        }

        /* Calculate the number of quarters needed */
        if (amount >= 25)
        {
            total_coins += amount / 25;
            amount %= 25;
        }

        /* Calculate the number of dimes needed */
        if (amount >= 10)
        {
            total_coins += amount / 10;
            amount %= 10;
        }

        /* Calculate the number of nickels needed */
        if (amount >= 5)
        {
            total_coins += amount / 5;
            amount %= 5;
        }

        /* Calculate the number of pennies needed */
        if (amount >= 1)
        {
            total_coins += amount / 1;
            amount %= 1;
        }

        printf("%d\n", total_coins);
        return 0;
    }
    else
    {
        printf("Error\n");
        return 1;
    }
}

#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a listint_t linked list..
 *
 * @head: pointer to the first node of the list
 *
 * Return: sum of data in the list, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
    int sum = 0;

    if (head == NULL)
        return (0);

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}

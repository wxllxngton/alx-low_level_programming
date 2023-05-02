#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 *
 * @head: pointer to the beginning of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *cur = head;
    const listint_t *printed[1024] = {NULL};

    while (cur != NULL)
    {
        size_t i;
        for (i = 0; i < count; i++)
        {
            if (cur == printed[i])
            {
                printf("-> [%p] %d\n", (void *)cur, cur->n);
                return count;
            }
        }

        printf("[%p] %d\n", (void *)cur, cur->n);
        printed[count] = cur;
        count++;

        cur = cur->next;
    }

    return count;
}

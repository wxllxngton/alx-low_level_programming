#include "lists.h"

/**
 * free_listint_safe - function frees a listint_t list safely.
 *
 * @h: A pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *tmp;
    size_t count = 0;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    while (current != NULL)
    {
        count++;
        if (current <= current->next)
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            free(current);
            *h = NULL;
            break;
        }
        tmp = current->next;
        free(current);
        current = tmp;
    }

    *h = NULL;
    return (count);
}

#include "lists.h"

/**
 * list_len - function that returns the number of elements in a list_t list.
 *
 * @h: pointer to head of linked list
 *
 * Return: number of present nodes in the list
 */

size_t list_len(const list_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        node_count++;
        h = h->next;
    }

    return (node_count);
}

#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: double pointer to the first node
 *
 * Returns: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;

    return *head;
}

#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head->next; /* Store the next node in a temporary variable */
        free(head); /* Free the current node */
        head = temp; /* Move to the next node */
    }
}

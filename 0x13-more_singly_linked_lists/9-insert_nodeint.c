#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 *
 * @head: double pointer to the first node of the list
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *temp, *new, *prev;
    unsigned int counter = 0;

    new = malloc(sizeof(listint_t));

    if (new == NULL)
        return (NULL);

    new->n = n;

    if (idx == 0) {
        new->next = *head;
        *head = new;
        return new;
    }

    prev = NULL;
    temp = *head;

    while (temp)
    {
        if (counter == idx) {
            prev->next = new;
            new->next = temp;
            return new;
        }
        prev = temp;
        temp = temp->next;
        counter++;
    }

    free(new);
    return (NULL);
}

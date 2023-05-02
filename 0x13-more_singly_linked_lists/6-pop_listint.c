#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 *
 * @head: double pointer to the first node of the list
 *
 * Return: content of the popped node
 */

int pop_listint(listint_t **head)
{
    listint_t *temp;
    int content;

    if (*head == NULL)
        return (0);

    temp = *head;
    content = temp->n;
    *head = (*head)->next;
    free(temp);

    return (content);
}

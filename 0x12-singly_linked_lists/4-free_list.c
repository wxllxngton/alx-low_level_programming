#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: pointtr to the head
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
    list_t *temp;

    while(head)
    {
        temp = head;
        head = head->next;
        free(temp->str);
        free(temp);
    }
}


#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: pointer to head of linked list
 * @str: string value to appended to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    new = malloc(sizeof(list_t));

    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    new->len = strlen(str);
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        list_t *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new;
    }

    return (new);
}


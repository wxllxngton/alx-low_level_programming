#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the first node of the list
 *
 * Return: content at the specified index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) 
{
    unsigned int counter = 0;
    
    if (head == NULL)
        return (NULL);
        
    while (head)
    {
        if (counter == index)
            return (head);
        head = head->next;
        counter++;
    }
    
    return (NULL);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * 
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 * 
 * Return: 1 if successful, -1 if failed
 */
 
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		i++;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

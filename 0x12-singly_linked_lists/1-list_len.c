#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to head of linked list
 *
 * Return: number of present nodes in the list
 */

size_t print_list(const list_t *h) 
{
    unsigned int nodesNo = 0;

    while (h)
    {
      h = h->next;
      nodesNo++;
    }
    return (nodesNo);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executes function
 * given as a parameter on each element of an array
 *
 * @array: input array
 * @size: length of the array
 * @action: pointer to the function provided
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter = 0;

	if (array == NULL || action == NULL)
		return;

	for (; counter < size; counter++)
		action(array[counter]);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function searches for an integer
 *
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: 1 if no element matches, -1 if size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; counter < size; counter++)
		if (cmp(array[counter]))
			return (counter);

	if (counter == size)
		return (-1);

	return (-1);
}

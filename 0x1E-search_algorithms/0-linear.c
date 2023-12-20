#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithm.
 *
 * @array: Pointer to an array.
 * @size: Length of the array.
 * @value: Value whose index is to be searched.
 *
 * Return:
 *  - (Index of the searched value)
 *  - (If value is not present in array or if array is NULL, returns -1)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = %d\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}

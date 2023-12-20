#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 *
 * @array: Pointer to an array.
 * @size: Length of the array.
 * @value: Value whose index is to be searched.
 *
 * Return:
 *  - (Index of the searched value)
 *  - (If value is not present in array or if array is NULL, returns -1)
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		size_t middle = (left + right) / 2;

		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
			printf("%d%s", array[i], (i < right) ? ", " : "\n");

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}

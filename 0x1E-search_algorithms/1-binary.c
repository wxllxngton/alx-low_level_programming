#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 *
 * @array: Pointer to the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return:
 *  - Index of the value if it exists, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		print_array(array + left, right - left + 1);

		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

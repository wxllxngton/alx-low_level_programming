#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers using
 * the Exponential search algorithm.
 * 
 * @array: Pointer to an array.
 * @size: Length of the array.
 * @value: Value to search for.
 *
 * Return:
 *  - Index of the searched value.
 *  - If value is not present in array or if array is NULL, returns -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index;
	int result;

	index = 1;

	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		index *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)(index / 2), (int)(index - 1));

	result = binary_search(array + (index / 2),
	                        ((index / 2) > size) ? size : (index / 2), 
	                        value);
	                        
	return (result == -1 ? result : result + (int)(index / 2));
}

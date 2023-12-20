#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers using
 * the Interpolation search algorithm.
 * 
 * @array: Pointer to an array.
 * @size: Length of the array.
 * @value: Value to search for.
 * 
 * Return:
 *  - (First index where the value is located)
 *  - (If the value is not present in the array or if the array is NULL, returns -1)
 */
int interpolation_search(int *array, size_t size, int value) 
{
	if (array == NULL || size == 0)
		return (-1);

	size_t low, high, pos;

	low = 0;
	high = size - 1;

	while (low <= high) 
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
			return (int)pos;
		}
		else if ((int)(pos + 1) >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1);
		}

		high = pos - 1;
	}

	return (-1);
}

#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers using
 * the Interpolation search algorithm.
 * 
 * @array: Pointer to an array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * 
 * Return:
 *  - (First index where the value is located)
 *  - (If the value is not present in the array or if the array is NULL, returns -1)
 */
int interpolation_search(int *array, size_t size, int value) 
{
    if (array == NULL)
        return (-1);

    size_t low = 0, high = size - 1, pos;

    while (low <= high) 
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return ((int)pos);
        else if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return (-1);
}

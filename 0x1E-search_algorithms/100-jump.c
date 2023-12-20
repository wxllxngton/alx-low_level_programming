#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 * 
 * @array: Pointer to an array.
 * @size: Length of the array.
 * @value: Value to search for.
 * 
 * Return:
 *  - (First index where the value is located)
 *  - (If the value is not present in the array or if the array is NULL, returns -1)
 */
int jump_search(int *array, size_t size, int value) 
{
    if (array == NULL)
        return (-1);

    size_t jump = (size_t)sqrt(size);
    size_t index = 0;

    while (index < size && array[index] < value) 
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);

        if (index + jump < size) 
        {
            if (array[index + jump] >= value) 
            {
                break;
            }
            index += jump;
        } 
        else 
        {
            break;
        }
    }

    printf("Value found between indexes [%lu] and [%lu]\n", index, index + jump);

    for (size_t i = index; i <= index + jump && i < size; i++) 
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) 
        {
            return ((int)i);
        }
    }

    return (-1);
}

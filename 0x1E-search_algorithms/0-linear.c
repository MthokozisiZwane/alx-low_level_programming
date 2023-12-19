#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an
 * array of integers using the Linear search algorithm
 *
 * @array: Array is a pointer to the first element int the array
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: first index where value is located
 * or -1 if the value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}

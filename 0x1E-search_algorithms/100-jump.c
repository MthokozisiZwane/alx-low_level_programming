#include "search_algos.h"

/**
 * jump_search -  function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t next = 0, i = 0;

	if (array != NULL)
	{
		while (next < size && array[next] < value)
		{
			prev = next;
			next = next + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       prev, array[prev]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       prev, next);
		for (i = prev; i <= next; i++)
		{
			if (i < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}

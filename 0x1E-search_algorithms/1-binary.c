#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: The index where value is located
 * or -1 if value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid_v = 0;
	size_t i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid_v = (left + right) / 2;
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[mid_v] < value)
			{
				left = mid_v + 1;
			}
			else if (array[mid_v] > value)
			{
				right = mid_v - 1;
			}
			else
			{
				return (mid_v);
			}
		}
	}
	return (-1);
}

#include "search_algos.h"

/**
 * exponential_search - Search for value in a sorted
 * array using Exponential algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	i = (1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

		low = i / 2;
		high = (i < size) ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (bina_search(array, low, high, value));
}

/**
 * bina_search - Searches for value in a sorted array using Binary algorithm
 * @array: Pointer to the first element of the array
 * @low: The lower bound for binary search
 * @high: The higher bound for binary search
 * @value: Value to search for
 * Return: Index where the value is located, or -1 if not found
 */
int bina_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array: ");
		print_array_segment(array, low, high);

	if (array[mid] == value)
		return (mid);


	if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
	}

	return (-1);
}

/**
 * print_array_segment - Prints a segment of an array between given indices
 * @array: Pointer to the first element of the array
 * @low: The lower index bound for printing
 * @high: The higher index bound for printing
 */
void print_array_segment(int *array, size_t low, size_t high)
{
	size_t j;

	for (j = low; j <= high; ++j)
	{
		printf("%d", array[j]);

	if (j < high)
		printf(", ");
	}

	printf("\n");
}

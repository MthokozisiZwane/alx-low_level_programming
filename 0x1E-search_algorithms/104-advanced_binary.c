#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 *  using Advanced Binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array
 * @low: The lower index bound for binary search
 * @high: The higher index bound for binary search
 * @value: Value to search for
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	 size_t mid;

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;

	printf("Searching in array: ");
	print_array_segment(array, low, high);

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_recursive(array, low, mid, value));
	}

	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));

	return (advanced_binary_recursive(array, low, mid - 1, value));
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

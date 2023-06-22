#include "function_pointers.h"
/**
 * int_index -  returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array of elements
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

if (size <= 0) /* checking for size */
	return (-1); /* return if size is invalid */ 

	for (int i = 0; i < size; i++)
	{

	if (cmp(array[i]) != 0) /* check if array is empty*/
	return (i); 

	}
	return (-1); /* if no element matches return -1 */ 

}

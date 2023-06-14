#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initialize with a specific char
 * @size: size of an array
 * @c: char to assign
 * Description: create array of characters
 * Return: pointer to array, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);

}

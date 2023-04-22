#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars and initialize with specific char
 * @size: size of an array
 * @c: char to assign
 * Description: create array of characters
 * Return: pointer to array, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}

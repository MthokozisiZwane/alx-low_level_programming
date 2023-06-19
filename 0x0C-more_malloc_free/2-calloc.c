#include <stdlib.h>
#include "main.h"

/**
 * memory_fill - fills memory with a constant byte
 * @str: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *memory_fill(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		str[i] = b;
	}

	return (str);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	memory_fill(pointer, 0, nmemb * size);

	return (pointer);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to the duplicated string
 * return null if str = null
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *mtho;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	mtho = malloc(sizeof(char) * (i + 1));

	if (mtho == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		mtho[j] = str[j];

	return (mtho);
}

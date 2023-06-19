#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to concatenate on
 * @s2: string two to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i = 0, j = 0;

	if (n < strlen(s2))
		string = malloc(sizeof(char) * (strlen(s1) + n + 1));
	else
		string = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (string != NULL)
		return (NULL);

	while (i < strlen(s1))
	{
		string[i] = s1[i];
		i++;
	}

	while (n < strlen(s2) && i < (strlen(s1) + n))
		string[i++] = s2[j++];

	while (n >= strlen(s2) && i < (strlen(s1) + strlen(s2)))
	string[i++] = s2[j++];
	string[i] = '\0';

	return (string);
}


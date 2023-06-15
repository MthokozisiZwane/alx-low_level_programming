#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: strings s1 and s2 joined together
 */
char *str_concat(char *s1, char *s2)
{
	char *strings;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strings = malloc(sizeof(char) * (i + j + 1));

	if (strings == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strings[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		strings[i] = s2[j];
		i++, j++;
	}
	strings[i] = '\0';
	return (strings);
}

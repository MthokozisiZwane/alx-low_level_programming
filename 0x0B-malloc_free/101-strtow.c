#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @string: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *string)
{
	int i, j, k;

	i = 0;
	k = 0;

	for (j = 0; string[j] != '\0'; j++)
	{
		if (string[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 * or NULL if string is null
 */
char **strtow(char *str)
{
	char **arr, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				arr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arr[k] = NULL;

	return (arr);
}

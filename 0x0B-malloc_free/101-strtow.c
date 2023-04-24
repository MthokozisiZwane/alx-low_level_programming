#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *str)
{
	int flag, i, j;

	flag = 0;
	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - splits a string into words
 * @strg: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *strg)
{
	char **matrix, *tmp;
	int n, k = 0, len = 0, words, c = 0, start, end;

	while (*(strg + len))
		len++;
	words = count_word(strg);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (strg[n] == ' ' || strg[n] == '\0')
		{
			if (c)
			{
				end = n;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = strg[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = n;
	}

	matrix[k] = NULL;

	return (matrix);
}

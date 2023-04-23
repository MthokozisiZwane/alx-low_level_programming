#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count of number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	i = argv[1];
	j = argv[2];
	result = i * j;

	printf("%d\n", result);

	return (0);
}

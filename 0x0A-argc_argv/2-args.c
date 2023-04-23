#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: count of the number of arguments
 * @argv: array of the arguments
 *
 * Return: Always 0 on Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc:counts number of arguments
 * @argv: array of passed arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

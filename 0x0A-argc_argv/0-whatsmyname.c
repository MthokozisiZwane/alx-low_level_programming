#include <stdio.h>
#include "main.h"

/**
 * main - will print the name of the program
 * @argc: counts the number of arguments
 * @argv: represents array of arguments
 *
 * Return: Always 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

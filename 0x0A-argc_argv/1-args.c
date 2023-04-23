#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: count of number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 on Success
 */

int main(int argc, char *argv[])
{
(void) argv; 
	printf("%d\n", argc - 1);

	return (0);
}

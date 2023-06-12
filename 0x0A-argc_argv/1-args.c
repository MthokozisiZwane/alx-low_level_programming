#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc:counts the number of arguments passed
 * @argv: array of passed arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;  /*void mean empty*/

printf("%d\n", argc - 1);

	return (0);
}

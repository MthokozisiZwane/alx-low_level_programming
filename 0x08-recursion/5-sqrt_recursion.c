#include "main.h"

int root_recursion(int n, int i);

/**
 *_sqrt_recursion - returns the natural square root of a number
 * @n: number to compute root
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_recursion(n, 0));
}

/**
 *root_recursion - recurses to find the natural root
 * of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the square root
 */
int root_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (root_recursion(n, i + 1));
}

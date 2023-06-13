#include "main.h"

int if_prime(int n, int i);

/**
 * is_prime_number - determines if an integer is a prime number or not
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (if_prime(n, n - 1));
}

/**
 * if_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime,and 0 if not
 */
int if_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (if_prime(n, i - 1));
}

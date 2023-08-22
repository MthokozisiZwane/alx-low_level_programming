#include <stdio.h>

/**
 * add - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of the two numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of the two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of the two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two numbers.
 * @a: The first number (numerator).
 * @b: The second number (denominator).
 *
 * Return: The result of the division.
 *         If the denominator is 0, prints an error message and returns 0.
 */
int div(int a, int b)
{
	if (b != 0)
	{
	return (a / b);
	}
	else
	{
	printf("Error: Division by zero\n");
	return (0);
	}
}

/**
 * mod - Computes the modulo between two numbers.
 * @a: The first number (dividend).
 * @b: The second number (divisor).
 *
 * Return: The result of the modulo operation.
 *         If the divisor is 0, prints an error message and returns 0.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
	return (a % b);
	}
	else
	{
	printf("Error: Modulo by zero\n");
	return (0);
	}
}

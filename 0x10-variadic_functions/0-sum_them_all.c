#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters.
 *
 * Return: 0 If n == 0
 *         Otherwise -return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list j;
	unsigned int i, sum = 0;

	va_start(j, n);

	for (i = 0; i < n; i++)
		sum += va_arg(j, int);

	va_end(j);

	return (sum);
}

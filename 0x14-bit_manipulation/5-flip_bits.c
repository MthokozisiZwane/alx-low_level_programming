#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count_bits = 0;
	unsigned long int current_value;
	unsigned long int result = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_value = result >> i;
		if (current_value & 1)
			count_bits++;
	}

	return (count_bits);
}

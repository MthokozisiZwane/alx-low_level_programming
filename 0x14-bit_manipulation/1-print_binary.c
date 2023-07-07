#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count_bits = 0;
	unsigned long int current_value;

	for (i = 63; i >= 0; i--)
	{
		current_value = n >> i;

		if (current_value & 1)
		{
			_putchar('1');
			count_bits++;
		}
		else if (count_bits)
			_putchar('0');
	}
	if (!count_bits)
		_putchar('0');
}

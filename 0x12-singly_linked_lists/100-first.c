#include <stdio.h>

void prints(void) __attribute__ ((constructor));

/**
 * prints - prints a sentence before the main
 * function is executed
 */
void prints(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

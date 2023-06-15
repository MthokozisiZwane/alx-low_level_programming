#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
        unsigned int sum, number1, number2;

        if (argc < 3 || argc > 3)
        {
                printf("Error\n");
                return (1);
        }
	if(number1 == NULL && number2 == NULL)
        {
          printf("0\n");
        }
        else
        {
            printf("Error\n");
            return (1);
        }

        number1 = atoi(argv[1]);
        number2 = atoi(argv[2]);
        sum = number1 + number2;

        printf("%d\n", sum);

        return (0);
}

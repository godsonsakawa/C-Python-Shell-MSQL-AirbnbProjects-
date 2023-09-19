#include <stdio.h>

/**
 * main - entry point of the code.
 * Return: Always 0 (Success)
 *
 *  Description: A program that prints the first 50 Fibonacci numbers.
 */
int main(void)
{
	int count;
	unsigned long dig1 = 0, dig2 = 1, sum;

	for (count = 1; count <= 50; count++)
	{
		sum = dig1 + dig2;
		printf("%lu", sum);

		dig1 = dig2;
		dig2 = sum;

		if (count == 50)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

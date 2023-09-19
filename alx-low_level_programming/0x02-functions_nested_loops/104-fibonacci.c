#include <stdio.h>

/**
 * main - prints the sum of even-valued fibonnacci sequence
 * 		terms not exceeding 4,000,000
 * Return: Always 0.
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, fibsum, sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}
		fibsum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibsum;

	}
	printf("%d\n", sum);
	
	return (0);
}

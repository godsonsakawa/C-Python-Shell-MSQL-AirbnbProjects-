#include <stdio.h>

/**
 * main - check the code
 * Return: Always zero (success)
 *
 *  Description: A program that computes and prints the sum -
 *  of all multiples of 3 or 5 below 1024(excluded)
 */

int main(void)
{
	int count, sum = 0;

	for (count = 0; count < 1024; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}

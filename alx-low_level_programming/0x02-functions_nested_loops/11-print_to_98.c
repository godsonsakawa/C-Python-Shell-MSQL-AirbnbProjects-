#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting integer
 */
void print_to_98(int n)
{
	int lastvalue;

	for (lastvalue = 98; lastvalue > n; n++)
	{
		printf("%d, ", n);
	}
	for (lastvalue = 98; lastvalue < n; n--)
	{
		printf("%d, ", n);
	}
	if (n == lastvalue)
		printf("%d", n);
	printf("\n");
}

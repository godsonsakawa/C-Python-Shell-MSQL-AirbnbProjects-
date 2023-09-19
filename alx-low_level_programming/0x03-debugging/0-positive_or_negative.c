#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * positive_or_negative - tests sign of number
 * @i: number to test.
 * Return: void.
 */

void positive_or_negative(int i)
{
	/* your code goes here */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

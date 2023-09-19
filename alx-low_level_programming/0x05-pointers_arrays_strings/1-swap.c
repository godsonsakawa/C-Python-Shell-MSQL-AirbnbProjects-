#include "main.h"
/**
 * swap_int - swaps values of two integers.
 * @a: references the first integer.
 * @b: references the second integer.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;
	*b = swap;
}

#include "main.h"
/**
  * reverse_array - reverse contents of an array.
  * @a: array of integers.
  * @n: number of elements in an array.
  * Return: void.
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int store;

	n = n - 1;
	while (i <= n)
	{
		store = a[i];
		a[i++] = a[n];
		a[n--] = store;
	}
}


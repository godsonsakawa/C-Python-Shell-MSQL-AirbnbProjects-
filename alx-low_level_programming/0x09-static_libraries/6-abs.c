#include "main.h"
/**
 * _abs - computes absolute value of interger argument.
 * @n: integre in which to get an absolute argument.
 * Return: void.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

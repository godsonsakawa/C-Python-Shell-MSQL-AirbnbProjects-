#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: inteer that references \
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int move;

	for (i = 0; i < n; i++)
	{
		for (move = 0; move < i; move++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

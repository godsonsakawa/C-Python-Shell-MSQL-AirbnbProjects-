#include "main.h"
/**
 * print_triangle - prints a triangle
 * @n: references the number # is printed on the terminal per line.
 * Return: void.
 */
void print_triangle(int n)
{
	int lines;
	int hash;
	int blank;

	for (lines = 0; lines < n; lines++)
	{
		for (blank = (n - 1 - lines); blank > 0; blank--)
		{
			_putchar(' ');
		}
		for (hash = 0; hash <= lines; hash++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

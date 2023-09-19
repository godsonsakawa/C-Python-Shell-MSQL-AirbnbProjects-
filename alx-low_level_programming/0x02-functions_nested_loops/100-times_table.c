#include "main.h"

/**
  * print_times_table - prints n times table
  * @n: references the number showing type of times table
  * Return: void
  */
void print_times_table(int n)
{
	int row, column, mul;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				mul = row * column;
				if (column == 0)
				{
					_putchar(mul + '0');
				}
				else if (mul <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul  % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(((mul / 100) % 10) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul  % 10) + '0');
				}
				if (column != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}

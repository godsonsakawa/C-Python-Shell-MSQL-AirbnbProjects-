#include "main.h"
/**
  * times_table - print 9-times table
  * Return: void.
  */
void times_table(void)
{
	int row, column, mul;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			mul = row * column;
			if (column == 0)
			{
				_putchar(mul + '0');
			}
			else if (mul > 9)
			{
				_putchar(' ');
				/*truncates the last value of the mul*/
				_putchar(mul / 10 + '0');
				/*returns the remainder, being last digit of mul*/
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			if (column != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}




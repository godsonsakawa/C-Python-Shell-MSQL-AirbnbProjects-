#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + 48);
			}
			_putchar(j % 10 + 48);
			j++;
		}
		_putchar('\n');
	}
}

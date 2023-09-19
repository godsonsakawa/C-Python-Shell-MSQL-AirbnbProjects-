#include <stdio.h>

/**
 * main - Entry point of the code.
 * Return: Always 0 Success.
 */
int main(void)
{
	/* 48 represents 0 and 57 represents 9 in ASCII*/
	int digit1 = 48;
	int digit2, digit3;

	while (digit1 < 56)
	{
		digit2 = 48;
		while (digit2 < 57)
		{
			digit3 = 48;
			while (digit3 < 58)
			{
				/*Check if the three digits are different & of the smallest combination*/
				if ((digit1 != digit2 && digit2 != digit3 && digit2 != digit3)
						&& (digit1 < digit2 && digit2 < digit3))
				{
					putchar(digit1);
					putchar(digit2);
					putchar(digit3);

					if (digit1 == 55 && digit2 == 56 && digit3 == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}

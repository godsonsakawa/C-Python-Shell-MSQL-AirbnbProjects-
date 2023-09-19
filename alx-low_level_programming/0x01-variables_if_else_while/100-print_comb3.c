#include <stdio.h>
/**
 * main - Entry point of the code.
 * Return: Always 0 Success.
 */
int main(void)
{
	/* 48 represents 0 and 57 represents 9 in ASCII*/
	int digit1 = 48;
	int digit2;
	/*represents first digit on the double digits*/
	while (digit1 < 57)
	{
		/*represents second int on the double integers*/
		digit2 = 48;
		while (digit2 < 58)
		{
			/*To eliminiate similar digits from re-occuring*/
			/* printing only the small combinations */
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 == 56 && digit2 == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * puts_half - prints half a string.
 * @str: the string being referenced.
 * Return: void.
 */
void puts_half(char *str)
{
	/*@i: references each element in an array.*/
	int i = 0;
	/*@n: references the number of elements in an array.*/
	int n;
	/*This code prints the whole string*/
	while (str[i] != '\0')
	{
		i++;
	}
	/* when string has an odd value; it prints half a string */
	if (i % 2 == 1)
	{
		/*the odd elements have to be added by 1 first before division*/
		n = (i + 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	/* when the string has an even value*/
	else
	{
		n = (i / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}

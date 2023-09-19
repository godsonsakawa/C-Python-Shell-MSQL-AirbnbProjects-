#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: references the string to be printed.
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}
	/*reverse the order of stdout*/
	i--;
	/*print out each character to stdout*/
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

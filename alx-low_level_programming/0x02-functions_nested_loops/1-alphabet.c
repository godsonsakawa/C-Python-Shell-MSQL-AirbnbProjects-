#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: print alphabet in lowercase followed by a new line
 *
 * Return: 0 means success.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

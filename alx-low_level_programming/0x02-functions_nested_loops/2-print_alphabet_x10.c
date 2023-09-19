#include "main.h"
/**
 * print_alphabet_x10 -prints all lowercase alphabets 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int times;

	for (times = 1; times <= 10; times++)
	{
		for (letter = 97; letter <= 122; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

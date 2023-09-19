#include "main.h"
/**
  * _puts - function that prints a string, followed by a new line, to stdout.
  * @s: char pointer variable
  * Return: void.
  */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

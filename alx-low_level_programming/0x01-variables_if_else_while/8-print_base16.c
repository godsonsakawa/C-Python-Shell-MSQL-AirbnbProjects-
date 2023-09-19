#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 means (success)
 */
int main(void)
{
	int i;
	char lowercase;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 means (success)
 */
int main(void)
{
	char revlowcase;

	for (revlowcase = 'z'; revlowcase >= 'a'; revlowcase--)
	{
		putchar(revlowcase);
	}
	putchar('\n');

	return (0);
}


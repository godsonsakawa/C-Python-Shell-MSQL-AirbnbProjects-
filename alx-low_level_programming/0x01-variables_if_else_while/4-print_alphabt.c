#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 means (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
		putchar(lowercase);
	}
	putchar('\n');

	return (0);
}


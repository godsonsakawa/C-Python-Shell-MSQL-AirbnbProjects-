#include "main.h"
#include <string.h>
/**
 * main - Entry prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 means (success)
 */
int main(void)
{
	char str[] = "_putchar";
	int length = strlen(str), i;

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}


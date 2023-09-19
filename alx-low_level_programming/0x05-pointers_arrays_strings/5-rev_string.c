#include "main.h"
/**
 * rev_string - reverse a string
 * @s: references a string.
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int n;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i > j)
	{
		n = s[i];
		s[i--] = s[j];
		s[j++] = n;
	}
}

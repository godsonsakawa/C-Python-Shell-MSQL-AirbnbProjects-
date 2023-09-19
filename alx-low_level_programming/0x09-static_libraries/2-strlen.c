#include "main.h"
/**
 * _strlen - counts the length of a string.
 * @s: references the char to be counted.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

#include "main.h"
/**
  * leet - a function that encodes a string into 1337
  * @s: references the chars in the string to be replaced.
  * Return: pointer to a char.
  */
char *leet(char *s)
{
	int i, j;

	char letters[] = "aAeEoOtTlL";
	char digits[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (letters[j] == s[i])
				s[i] = digits[j];
		}
	}
	return (s);
}

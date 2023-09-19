#include "main.h"
/**
  * rot13 - encodes a string using rot13
  * @s: input string
  * Return: pointer to char.
  */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}

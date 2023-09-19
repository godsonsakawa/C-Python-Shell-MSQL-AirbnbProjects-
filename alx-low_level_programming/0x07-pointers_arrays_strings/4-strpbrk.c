#include "main.h"
/**
  * _strpbrk - searches a string for any set of bytes.
  * @s: string to be searched.
  * @accept: string with characters to be matched.
  * Return: characters matched starting from 1st occurrence of string
  * in s of any characters in accept.
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

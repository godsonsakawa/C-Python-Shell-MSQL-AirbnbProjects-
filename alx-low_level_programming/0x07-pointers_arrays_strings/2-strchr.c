#include "main.h"
#include <string.h>
/**
  * _strchr - locates character of a string.
  * @c: The character to be located in string s.
  * @s: The string containing the characters to be located.
  * Return: return s.
  */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}

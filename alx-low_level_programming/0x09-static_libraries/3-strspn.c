#include "main.h"
#include <string.h>
/**
  * _strspn - gets the length of a prefix substring.
  * @s: references the string.
  * @accept: Consists entirely of bytes in the initial segment of s.
  * Return: Always 0 (success)
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, n;

	n = strlen(accept);

	while (i <= n && s[i] != '\0')
	{
		if (s[i] == accept[i])
		{
			return (n);
		}
		accept++;
		if (s[i] != accept[i])
		{
			accept++;
			return (n);
		}
	}
	return (0);
}


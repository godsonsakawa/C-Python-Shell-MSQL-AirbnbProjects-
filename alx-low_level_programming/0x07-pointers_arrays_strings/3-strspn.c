#include "main.h"
/**
  * _strspn - gets the length of a prefix substring.
  * @s: prefix substring to be scanned..
  * @accept: bytes to match on s bytes.
  * Return: number of bytes in the prefix.
  *         substring that matches in accept.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (accept[index] == *s)
			{
				count++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}

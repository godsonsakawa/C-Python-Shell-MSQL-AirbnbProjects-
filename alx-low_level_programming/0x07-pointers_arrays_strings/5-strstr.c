#include "main.h"
/**
  * _strstr - locates a substring.
  * @haystack: string to be searched.
  * @needle: substring to be located.
  * Return: a pointer to the beginning of located
  *         substring.
  */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack++)
	{
		if (*needle == *haystack)
		{
			return (haystack++);
		}
	}
	return ('\0');
}

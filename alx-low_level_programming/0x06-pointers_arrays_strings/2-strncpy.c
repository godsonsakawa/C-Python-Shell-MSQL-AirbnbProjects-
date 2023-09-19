#include "main.h"
/**
  * _strncpy - cpoies a string.
  *@dest: references the 1st string/ destination string.
  *@src: references the 2nd string/ source string that gets copied.
  *@n: specifies the number of characters from a string to be copied.
  *Return: Always 0 (success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

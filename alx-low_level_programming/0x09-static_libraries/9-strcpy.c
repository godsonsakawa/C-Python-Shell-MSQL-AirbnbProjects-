#include "main.h"
#include <string.h>
/**
  *_strcpy - copies a string
  *@dest:  the 1st string/destination string.
  *@src: references the 2nd string which is copied/ source string.
  *Return: Always 0 (success)
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len1;

	len1 = strlen(src);

	for (i = 0; i <= len1 && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


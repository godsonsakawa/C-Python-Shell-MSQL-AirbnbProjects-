#include "main.h"
#include <string.h>
/**
  * _strcat - concatenates two strings.
  *@dest: references the first string.
  *@src: references the second string that gets appended to dest.
  * Return: Always 0 (success)
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int len1;
	int len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

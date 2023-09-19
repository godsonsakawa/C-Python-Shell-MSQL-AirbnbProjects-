#include "main.h"
#include "string.h"
/**
  *_strncat - concatenates two strings.
  *@dest: 1st string/ destination string.
  *@src: 2nd string, the one to be appended.
  *@n: the number of characters to be appended from src.
  *Return: Always 0 (success)
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1;

	len1 = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

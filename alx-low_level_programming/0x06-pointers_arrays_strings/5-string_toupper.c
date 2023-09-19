#include "main.h"
/**
 *string_toupper - changes all lowercase string to uppercase
 *@s: string to be referenced.
 *Return: Always 0 success.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{	/*  Test if small letters*/
		if (s[i] >= 97 &&  s[i] <= 122)
		{
		/*Then subtract 32 to convert to "uppercase 65 to 90" */
			s[i] = s[i] - 32;
		}
	i++;
	}
	return (s);
}

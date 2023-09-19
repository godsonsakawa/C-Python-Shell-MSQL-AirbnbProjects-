#include "main.h"
/**
  * _atoi - function that converts a string to an integer.
  * @s: references the string to be converted.
  * Return: the converted value or 0 on error.
  */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;

	do {
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');

		else if (num > 0)
			break;

	} while (s[i++]);

	return (num * sign);
}

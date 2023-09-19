#include "main.h"
#include <ctype.h>
/**
 * _islower - tests if a character is lowercase
 *
 * @c: an input character
 *
 * Return: 1 if @c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

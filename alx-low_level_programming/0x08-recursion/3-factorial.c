#include "main.h"
/**
  * factorial - factorial of a given number
  * @n: references the number
  * Return: Always (0) success, -1 indicates an error
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

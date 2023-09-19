#include "main.h"
/**
  * _pow_recursion - power of  x raised to y
  * @x: references the base value.
  * @y: refences the exponential value.
  * Return: power of the base value.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

#include "main.h"
/**
 * _pow_recursion - function that returns the power of x raised to y
 *
 * @x: value to be raised
 * @y: value to raise
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	int x;
	int y;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

		return (x * power(x, y - 1));
}

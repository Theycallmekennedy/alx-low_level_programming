#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number to carry out factorial operation
 * Return: factorial n
 */
int factorial(int n);
{
	if (n < 0)
	{
	return (-1);
	}

	else if (n <= 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}

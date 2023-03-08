#include "main.h"
/**
 * int factorial - function that returns factorial
 * @n - number of string
 * Return: factorial n
 */
int factorial(int n);
{
	if (n == 0)
	{
	return (1);
	}

	else
		return (n * factorial(n - 1));
}

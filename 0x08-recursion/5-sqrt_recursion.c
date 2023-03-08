#include "main.h"
#include <math.h>
/**
 *_sqrt_recursion -  func that returns the natural square root of a number.
 * @n: for number input
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (helper(n, 1));
}

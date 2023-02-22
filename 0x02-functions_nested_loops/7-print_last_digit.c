#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: number's last digit result
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = (n % 10);

	if (m < 0)
	{
		m = (-1 * m);
	}

	_putchar(m + '0');
	return (m);
}

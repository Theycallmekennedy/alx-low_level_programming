#include "main.h"

/**
 * print_alphabet_x10-function that prints 10 times the alphabet
 *
 * Return 0 upon success
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
	i++;
		j = 'a';

		while (j <= 'z')
		{
		_putchar(j);
		j++;
		}
	_putchar('\n');
	}
}

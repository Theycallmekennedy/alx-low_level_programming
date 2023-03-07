#include "main.h"
/**
 * print_diagsums - function prints sum of two diagonals of a square matrix
 *
 * @a: pointer to start of matrix
 *
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, p, l = 0, r = 0;

	while (i < size)
	{
		p = (i * size) + i;
		l += *(a + p);
		i++;
	}

	i = 0;
	j = size - 1;

	while (i < size)
	{
		p = (i * size) + j;
		r += *(a + p);
		i++;
		j--;
	}

	printf("%d, %d\n", l, r);
}

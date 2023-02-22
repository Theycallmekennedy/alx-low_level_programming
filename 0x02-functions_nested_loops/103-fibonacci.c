#include <stdio.h>

/**
 * main - function that prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long fibNum1 = 0, fibNum2 = 1, fibsum;
	float totalSum;

	while (1)
	{
		fibsum = fibNum1 + fibNum2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			totalSum += fibsum;

		fibNum1 = fibNum2;
		fibNum2 = fibsum;
	}
	printf("%.0f\n", totalSum);

	return (0);
}

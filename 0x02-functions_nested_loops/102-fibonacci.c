#include <stdio.h>

/**
 * main - function that prints first 50 starting with 1 and 2,
 *        separated by a comma and followed by a space
 *
 * Return: returns 0
 */
int main(void)
{
	int count;
	unsigned long fibNum1 = 0, fibNum2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibNum1 + fibNum2;
		printf("%lu", sum);

		fibNum1 = fibNum2;
		fibNum2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

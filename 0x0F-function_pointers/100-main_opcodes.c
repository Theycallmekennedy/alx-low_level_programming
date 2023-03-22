#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int ctr;

	for (ctr = 0; ctr < n; ctr++)
	{
		printf("%.2hhx", a[ctr]);
		if (ctr < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
	int d;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	d = atoi(argv[1]);
	if (d < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, d);
	return (0);
}

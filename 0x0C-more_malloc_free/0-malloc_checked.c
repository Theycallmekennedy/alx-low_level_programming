#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size in bytes of the memory to be allocated
 *
 * Return: pointer to the allocated memory
 *         exits with status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}

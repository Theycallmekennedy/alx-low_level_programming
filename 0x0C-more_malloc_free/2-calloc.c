#include <stdlib.h>
#include "main.h"
/**
 * _calloc - implements calloc with malloc
 * Allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: the size of the array to be created
 * Return: NULL if nmemb/size is 0,
 * if malloc fails, return NULL,
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	char *n;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	n = m;

	for (i = 0; i < (nmemb * size); i++)
		n[i] = '\0';

	return (m);
}

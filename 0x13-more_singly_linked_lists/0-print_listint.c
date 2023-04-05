#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t print_listint(const listint_t *h);

/**
 *print_listint - function that prints all the elements of listint_t
 *@h: pointer to the head of listint_h
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}

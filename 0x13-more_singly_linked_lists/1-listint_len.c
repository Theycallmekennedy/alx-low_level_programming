#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that returns number of elements in listint_t list
 *
 * @h: Head of the linked list
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *first = h;

	while (first != NULL)
	{
		i++;
		first = first->next;
	}

	return (i);
}

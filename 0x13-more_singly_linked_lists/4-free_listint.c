#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - this function frees memory from listint_t
 *
 * @head: a pointer to head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

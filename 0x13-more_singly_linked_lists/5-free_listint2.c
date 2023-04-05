#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - this function frees listint_t list and sets the head to NULL
 *
 * @head: pointer to pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
	*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}

#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - a function that deletes the head node of listint_t list and
 * returns head node's data
 *
 * @head: a pointer to pointer to the head node
 *
 * Return: head node's data (data) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}

	current = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (n);
}

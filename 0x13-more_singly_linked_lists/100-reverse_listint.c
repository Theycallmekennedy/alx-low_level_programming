#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next;
	}
	*head = previous_node;
	return (*head);
}

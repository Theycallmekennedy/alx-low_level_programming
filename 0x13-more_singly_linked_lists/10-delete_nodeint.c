#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - this function deletes node at index index of listint_t
 *
 * @head: pointer to pointer to head of list
 *
 * @index: index of the node to be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *current_node, *previous_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	previous_node = *head;
	for (m = 0; m < index - 1 && previous_node->next != NULL; m++)
	{
		previous_node = previous_node->next;
	}
	if (previous_node->next == NULL)
		return (-1);

	current_node = previous_node->next;
	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}

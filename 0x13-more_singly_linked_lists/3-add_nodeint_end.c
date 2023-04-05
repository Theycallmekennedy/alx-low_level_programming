#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - this function adds new node at the end of listint_t
 *
 * @head: the pointer to head of listint_t
 *
 * @n: new integer data
 *
 * Return: a pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *recent_node, *present_node;

	if (head == NULL)
	{
		return (NULL);
	}

	recent_node = malloc(sizeof(listint_t));
	if (recent_node == NULL)
	{
		return (NULL);
	}

	recent_node->n = n;
	recent_node->next = NULL;

	if (*head == NULL)
	{
		*head = recent_node;
		return (recent_node);
	}

	present_node = *head;
	while (present_node->next != NULL)
	{
		present_node = present_node->next;
	}

	present_node->next = recent_node;

	return (recent_node);
}

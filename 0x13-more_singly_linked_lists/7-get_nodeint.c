#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function returns nth node of a listint_t linked list
 *
 * @head: the pointer to the head node
 *
 * @index: node index, starting at 0
 *
 * Return: a pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	return (current);
}

#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - this function inserts new node at idx
 *
 * @head: double pointer
 *
 * @idx: index of the node
 *
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *recentnode;
	listint_t *presentnode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		presentnode = *head;
		for (count = 0; count < idx - 1 && presentnode != NULL; count++)
		{
			presentnode = presentnode->next;
		}
		if (presentnode == NULL)
			return (NULL);
	}
	recentnode = malloc(sizeof(listint_t));
	if (recentnode == NULL)
		return (NULL);
	recentnode->n = n;
	if (idx == 0)
	{
		recentnode->next = *head;
		*head = recentnode;
		return (recentnode);
	}
	recentnode->next = presentnode->next;
	presentnode->next = recentnode;
	return (recentnode);
}

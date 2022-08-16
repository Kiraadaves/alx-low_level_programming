#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at nth position
 * @head: pointer to pointer to head node
 * @idx: position to insert
 * @n: integer value of new node
 *
 * Return: pointer to list with added new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	for (x = 0; x < (idx - 1); x++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}

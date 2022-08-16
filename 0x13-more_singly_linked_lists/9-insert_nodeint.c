#include "lists.h"

/**
 * listlen - returns the length of a list
 * @h: pointer to head node
 * Return: length of list
 */
size_t listlen(listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

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
	unsigned int x = listlen(*head);
	unsigned int i = 1;
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if ((newnode == NULL) || (idx > x))
		return (NULL);
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (*head);
}

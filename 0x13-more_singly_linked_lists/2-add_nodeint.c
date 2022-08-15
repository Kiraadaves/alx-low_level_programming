#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer to head pointer
 * @n: value of the integer
 *
 * Return: pointer to head pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}

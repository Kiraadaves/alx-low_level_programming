#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t list.
 * @head: pointer to pointer
 * @n: value of integer
 *
 * Return: pointer to as new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

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
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}


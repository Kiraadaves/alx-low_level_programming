#include "lists.h"

/**
 * free_listint2 - frees a list and sets head pointer to null
 * @head: pointer to pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}

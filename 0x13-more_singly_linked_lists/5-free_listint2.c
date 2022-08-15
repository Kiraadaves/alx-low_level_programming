#include "lists.h"

/**
 * free_listint2 - frees a list and sets head pointer to null
 * @head: pointer to pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *newhead, *temp;

	if (*head != NULL)
	{
		newhead = *head;
		while (newhead != NULL)
		{
			temp = newhead;
			newhead = newhead->next;
			free(temp);
		}
	*head = NULL;
	}
}

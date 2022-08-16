#include "lists.h"

/**
 * pop_listint - deletes head node and returns head node integer n
 * @head: dounle pointer
 * Return: 0 if head is null
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	x = temp->n;
	*head = temp->next;
	free(temp);
	return (x);
}

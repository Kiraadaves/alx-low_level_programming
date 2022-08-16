#include "lists.h"

/**
 * sum_listint - returns the sum of all data(n) in the list
 * @head: pointer to head node
 * Return: 0 if list is empty and sum of data is not empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

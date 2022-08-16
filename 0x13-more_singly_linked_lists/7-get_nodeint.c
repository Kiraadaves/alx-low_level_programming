#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head node
 * @index: position of the node
 *
 * Return: nth node and NULL if nth node is absent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}

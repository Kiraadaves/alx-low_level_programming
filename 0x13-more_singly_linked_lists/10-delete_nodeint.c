#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at nth index
 * @head: pointer to node pointer
 * @index: position of node
 *
 * Return: 1 if successful and -1 if not successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i;

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	return (1);
}

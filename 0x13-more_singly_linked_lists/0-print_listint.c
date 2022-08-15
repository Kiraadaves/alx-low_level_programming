#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to head pointer
 *
 * Return: returns number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}


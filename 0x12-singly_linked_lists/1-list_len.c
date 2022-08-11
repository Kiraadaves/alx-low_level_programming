#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: pointer to head pointer
 * Return: returns number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

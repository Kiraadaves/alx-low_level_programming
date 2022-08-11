#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * strleng - returns lenght of a string
 * @str: the string
 * Return: string length
 */

int strleng(const char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * add_node_end - returns a pointer to a node pointer
 * @head: double pointer to node head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int x;
	list_t *newnode, *temp;

	x = strleng(str);
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = x;
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

#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * strleng - get length of string
 * @str: string
 * Return: return length of string
 */

int strleng(const char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * add_node - function returns a pointer to new node head
 * @head: pointer to a pointer to a node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int x;

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
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}

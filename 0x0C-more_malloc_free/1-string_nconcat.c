#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - will count and return length of string
 * @s: the string
 * Return: the length of string
 */

int _strlen(char *s)
{
	int count = 0;

	if (!*s)
		return (0);
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * string_nconcat - concats 2 strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to add
 * Return: ptr to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	int total = 0;
	int i;
	int j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += _strlen(s1) + n;
	x = malloc((total * sizeof(char)) + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		x[i] = s1[i];
	}
	for (; n || !s2; n--, i++, j++)
	{
		x[i] = s2[j];
	}
	x[i] = '\0';
	return (x);
}

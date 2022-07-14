#include "main.h"

/**
 * _strncat - conctenates n number of character from a string
 * @dest: destination string
 * @src: source string
 * @n: number of character
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

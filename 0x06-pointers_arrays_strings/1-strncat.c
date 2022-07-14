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

	while (*(dest + i) != '\0')
	{
		i++;
	}
	int j = 0;

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}

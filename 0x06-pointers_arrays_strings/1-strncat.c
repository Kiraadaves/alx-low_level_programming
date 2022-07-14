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
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	int x;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	for (x = 0; x < n; x++)
	{
		dest[len1 + x] = src[x];
	}
	return (dest);
}

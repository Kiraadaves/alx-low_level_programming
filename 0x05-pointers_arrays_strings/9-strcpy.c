#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies strings from pointer src
 * @dest: destination
 * @src: source
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		*(dest + a) = *(src + a);
		if (*(src + a) == '\0')
			break;
		a++;
	}
	return (dest);
}

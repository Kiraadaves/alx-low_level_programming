#include "main.h"
/**
 * toint - converts a character to an unsigned int
 * @c: character to be converted
 * Return: returns an unsigned int
 */
unsigned int toint(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string of binary number
 * Return: returns unsigned int or 0 if b contains a number
 * other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp;
	unsigned int total = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = toint(b[i]);
		total = (total * 2) + tmp;
	}
	return (total);
}

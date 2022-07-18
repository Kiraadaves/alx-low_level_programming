#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: source string
 * @accept: accepted xters
 *
 * Return: string from first found accepted xter
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');

	char c = 'A';

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
		putchar('\n);
	return (0);
}

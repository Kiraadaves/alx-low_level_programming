#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
		putchar('\n');
	return (0);
}

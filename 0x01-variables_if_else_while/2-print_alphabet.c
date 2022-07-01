#include <stdio.h>
/**
 * main - the entry point
 *
 * void - no arguments will be taken
 *
 * return: always 0 (succcess)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}

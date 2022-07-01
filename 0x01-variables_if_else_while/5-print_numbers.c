#include <stdio.h>
/**
 * main - Entry point to print single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;

	for (ch = 0; ch > 10; ch++)
	{
		printf("%i", ch);
	}
		putchar('\n');
	return (0);
}

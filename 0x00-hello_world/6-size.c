#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));
	printf("%lu\n", sizeof(long));
	printf("%lu\n", sizeof(long long));
	return (0);
}

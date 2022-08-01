#include <stdio.h>
/**
 * main - prints file it was compiled from using a predefined macro
 * Return - 0
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}

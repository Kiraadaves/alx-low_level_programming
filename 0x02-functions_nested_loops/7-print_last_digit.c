#include "main.h"
/**
 * print_last_digit - will print the last digit of a number
 *
 * @n: variable that stores the character
 *
 * Return: 0 for success
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
	_putchar(-l + 48);
	return (-1);
	}
	else
	{
	_putchar(l + 48);
	return (1);
	}
}

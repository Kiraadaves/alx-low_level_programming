#include "main.h"

/**
 * is_prime - detect if input number is a prime number
 * @n: input number
 * @c: iterator
 * Return: 0 if not aa prime number and 1 if prime number
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - checks if an input is prime number
 * @n: input number
 * Return: 0 if not prime and 1 if prime
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

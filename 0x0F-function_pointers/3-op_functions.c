#include "3-calc.h"
/**
 * op_add -adds two numbers
 * @a: first number
 * @b: second number
 * Return: return sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of a minus b
 * @a: number
 * @b: number
 * Return: subtraction of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplies two numbers
 * @a: number
 * @b: number
 * Return: multiplication of 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: number1
 * @b: number2
 * Return: division of 2 numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - function gets remainder of a division
 * @a: numerator
 * @b: denominator
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}

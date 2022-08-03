#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: namr string
 * @f: pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	(*f)(name);
}

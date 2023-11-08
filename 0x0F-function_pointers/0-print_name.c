#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints a name
 * @f: variable to hold the string name
 * @name: name of person
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

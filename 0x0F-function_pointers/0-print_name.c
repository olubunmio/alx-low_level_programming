#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string to print
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}

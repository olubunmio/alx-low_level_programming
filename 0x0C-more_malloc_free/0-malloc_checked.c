#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: size to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *i;
		i = malloc(b);
		if (i == NULL)
			exit(98);
		return (i);
}

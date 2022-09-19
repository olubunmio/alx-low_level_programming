#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

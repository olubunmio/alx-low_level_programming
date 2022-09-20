#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

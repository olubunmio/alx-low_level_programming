#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of 2 diagonals of square matrix
 *
 * @a: matrix
 * @size: size
 *
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int i, result1 = 0, result2 = 0;

	for (i = 0; i < size; i++)
	{
		result1 += a[(size + 1) * i];
		result2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", result1, result2);
}

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse contents of an array
 * @a: array to reverse
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i -1];
		a[n - i - 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
}

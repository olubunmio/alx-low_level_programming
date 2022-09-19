#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function to print reverse of a string
 * @s: character to reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

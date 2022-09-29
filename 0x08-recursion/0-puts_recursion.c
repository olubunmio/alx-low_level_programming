#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string followed by a new lin
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0, n = strlen(s);

	if (s[i] != '\0' && i < n)
	{
		_putchar(s[i]);
	}
	i++;
	_puts_recursion(s);
}

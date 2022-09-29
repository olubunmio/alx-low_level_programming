#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new lin
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
	}
	_puts_recursion(s);
}

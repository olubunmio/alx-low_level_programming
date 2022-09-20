#include "main.h"
#include <string.h>
/**
 * puts_half - prints second half of a string
 * @str:string to print
 * Return:void
 */
void puts_half(char *str)
{
	int i, k, l;

	l = strlen(str);
	if (l % 2 == 0)
		k = l / 2;
	else
		k = (l / 2) - 1;

	for (i = k; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

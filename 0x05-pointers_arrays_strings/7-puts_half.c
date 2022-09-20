#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str:string to print
 * Return:void
 */
void puts_half(char *str)
{
	int i, j, k;
	
	j = strlen(str);
	k = strlen(str)/2;

	for (i = k; i <= j; i++)
	{
		_putchar(str[i]);
	}
}
#include "main.h"
#include <string.h>
/**
 * puts_half - prints second half of a string
 * @str:string to print
 * Return:void
 */
void puts_half(char *str)
{
	int l;
	
	for (l = 0; str[l] != '\0'; l++)
		;

	l++;
	for (l /= 2; str[l] != '\0'; l++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

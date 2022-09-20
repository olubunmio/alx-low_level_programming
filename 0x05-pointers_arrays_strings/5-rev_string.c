#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, l;
	char c, temp;
	l = strlen(s) - 1;
	
	for (j = 0; j < strlen(s)/2; j++)
	{
		temp = s[i];
		s[i] = s[l];
		s[l--] = temp;
	}
}

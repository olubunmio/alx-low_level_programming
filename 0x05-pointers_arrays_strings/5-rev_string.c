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
	int i, l, k;
	char temp;
	k = strlen(s);
	l = strlen(s) - 1;
	
	for (i = 0; i < k/2; i++)
	{
		temp = s[i];
		s[i] = s[l];
		s[l--] = temp;
	}
}

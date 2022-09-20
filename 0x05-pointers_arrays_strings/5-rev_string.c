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
	int i, j, k;
	char c;

	for (j = 0; s[j] != '\0'; j++)
	;

	i = 0;

	k = j / 2;

	while (k--)
	{
		c = s[k - i -1];
		s[k - i -1] = s[i];
		s[i] = c;
		i++;
	}
}

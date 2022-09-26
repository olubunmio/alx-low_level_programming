#include <stdio.h>
#include "main.h"

/**
 * _strspn - get lenght of a prefix
 * @s: string to get
 * @accept: bytes to return
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k;

	while (accept[i])
	{
		k = 0;

		while (s[k] != 32)
		{
			if (accept[i] == s[k])
			{
				j++;
			}
			k++;
		}
		i++;
	}
	return (j);
}

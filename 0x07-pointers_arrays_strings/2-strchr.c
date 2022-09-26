#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to search
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}

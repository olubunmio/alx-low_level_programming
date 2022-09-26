#include <stdio.h>

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
	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			j == c;
		else
			j == '\0';
	}
	return (j);
}

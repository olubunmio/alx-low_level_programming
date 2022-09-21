#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: character of bytes
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}

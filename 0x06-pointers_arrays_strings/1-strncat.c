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
	
	i = len = 0;
	while (dest[i++])
	{
		len++;
	}
	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[len + 1] = src[i];
	}
	dest[len + 1] = '\0';
	return (dest);
}

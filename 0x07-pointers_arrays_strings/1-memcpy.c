#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function to copy from source to destination
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

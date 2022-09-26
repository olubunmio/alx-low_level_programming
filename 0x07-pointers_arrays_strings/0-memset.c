#include <stdio.h>

/**
 * _memset - function to fill memory with a constant byte
 * @s: string to fill
 * @b: byte to fill
 * @n: number of bytes of the memory
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

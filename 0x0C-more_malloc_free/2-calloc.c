#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function to allocate memory
 * @nmemb: members
 * @size: size to allocate
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	s = malloc(l);
	if (s == NULL)
		return (NULL);
	while (i < 1)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

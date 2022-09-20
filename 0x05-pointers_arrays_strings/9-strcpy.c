#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string 
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');
	return (dest);
}

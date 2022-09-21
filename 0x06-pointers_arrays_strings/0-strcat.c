#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @*dest: destination string
 * @*src: source string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(*src, *dest));
}

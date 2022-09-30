#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks for empty string
 * @s: string
 *
 * Return: string
 */
int is_palindrome(char *s)
{
	if (*s != *(s + 1))
	{
		return (0);
	}
	if (*s == 0)
	{
		return (1);
	}
	return (!(is_palindrome(s + 1)));
}

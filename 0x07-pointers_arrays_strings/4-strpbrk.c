#include "main.h"

/**
 * _strpbrk - serach string for any bytes
 * @s: source string
 * @accept: characters
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
	}
	return ('\0');
}

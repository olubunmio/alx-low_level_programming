#include "main.h"

/**
 * _strstr - locate a string
 * @haystack: string to search
 * @needle: string to find
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}

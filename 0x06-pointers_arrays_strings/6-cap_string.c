#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s; string to capitalize
 * Return: string
 */
char *cap_string(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (j == 0)
		{
			if ((s[j] >= 'a' && s[j] <= 'z'))
			{
				str[j] = str[j] - 32;
			}
			continue;
		}
		if (str[j] == ' ')
		{
			++j;
			if (str[j] >= 'a' && str[j] <= 'z')
			{
				str[j] = str[j] - 32;
				continue;
			}
		}
		else
		{
			if (str[j] >= 'A' && str[j] <= 'Z')
			{
				str[j] = str[j] + 32;
			}
		}
	}
	return (s);
}

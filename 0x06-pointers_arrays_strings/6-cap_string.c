#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string to capitalize
 * Return: string
 */
char *cap_string(char *s)
{
	int j, k;
	char a[] = " \t\n,;.!?\"(){}";
	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if ((s[j] >= 'a' && s[j] <= 'z'))
		{
			if (j == 0)
			{
				s[j] -= 'a' - 'A';
			}
			else 
			{
				for (k = 0; k <= 12; k++)
				{
					if (a[k] == s[j + 1])
					{
						s[j] -= 'a' - 'A';
					}
				}
			}
		}
	}
	return (s);
}

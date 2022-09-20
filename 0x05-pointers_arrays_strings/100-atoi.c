#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	j = 1;
	if (s[i] == '-')
	{
		j = -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	if(j = -1)
		n = -1 * n;
	return n;
}

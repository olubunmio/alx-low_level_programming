#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, n, m;
	bool check = false;

	i = n = 0;
	if (str[i] == '-')
	{
		check = true;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if(check)
		n = -1 * n;
	return n;
}

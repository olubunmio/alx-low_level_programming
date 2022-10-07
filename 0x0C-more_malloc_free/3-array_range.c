#include "main.h"
#include <stdlib.h>

/**
 * array_range - function to create array of integers
 * @min: members
 * @max: size to allocate
 * Return: int
 */
void *array_range(int min, int max)
{
	int i = 0, *s;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (s == NULL)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}

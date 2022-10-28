#include "main.h"

/**
 * get_bit - gets value of bit
 * @n: bit
 * @index: index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

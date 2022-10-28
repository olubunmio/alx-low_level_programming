#include "main.h"

/**
 * clear_bit - clear value of bit
 * @n: poniter to bit
 * @index: index
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}

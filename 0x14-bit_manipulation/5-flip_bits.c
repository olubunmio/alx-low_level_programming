#include "main.h"

/**
 * flip_bits - counts number of bits
 * @n: number
 * @m: index
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}

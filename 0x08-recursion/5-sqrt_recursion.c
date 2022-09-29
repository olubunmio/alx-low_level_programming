#include "main.h"

/**
 * _sqrt_recursion - square root of a number
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (_sqrt_recursion(n) % 10 != 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n > 1)
	{
		return (n / _sqrt_recursion(n / 2));
	}
}

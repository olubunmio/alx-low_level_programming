#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Description: prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

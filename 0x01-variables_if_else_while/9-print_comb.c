#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++1;
	}
	putchar('\n');
	return (0);
}

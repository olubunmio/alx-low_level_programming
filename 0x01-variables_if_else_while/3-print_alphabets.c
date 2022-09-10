#include <stdio.h>

/**
 * main - print alphabet lower and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	char u;

	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}

	putchar('\n');
	return (0);
}

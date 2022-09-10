#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar("%c\n", ch);
	}
	return (0);
}

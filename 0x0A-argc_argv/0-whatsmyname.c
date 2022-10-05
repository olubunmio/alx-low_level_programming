#include <stdio.h>

/*
 * main - prints name of program
 * argc: number of command line arguments
 * argv: array that contains program command line
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

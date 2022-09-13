#include "main.h"

/**
 * _isalpha: rntry point
 *
 * Description: checks for alphabetic character
 * @c: parameter to test
 *
 * Return: return 1 if character is a letter and 0 if character is not a letter
 */
int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}

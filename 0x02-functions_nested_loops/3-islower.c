#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 *
 * Description: checks lowercase character
 */
int is_lower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

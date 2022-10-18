#include "main.h"
/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return: 1 or 0
 */
int _islower(int c)
{
	int rval;

	if (c >= 'a' && c <= 'z')
	{
		rval = 1;
	}
	else
	{
		rval = 0;
	}
	return (rval);
}

#include "main.h"

/**
 * _isdigit - prototype for checking for number
 * @c: for checking digits
 * Return: Always 0
 */

int _isdigit(int c)
{
	int rval;

	if (c >= '0' && c <= '9')
	{
		rval = 1;
	}
	else
	{
		rval = 0;
	}

	return (rval);
}

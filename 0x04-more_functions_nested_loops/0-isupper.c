#include "main.h"
/**
 * _isupper - check for uppercase letter
 * @c: value for checking
 * Return: Always 0
 */
int _isupper(int c)
{
	int rval;

	if (c >= 'A' && c <= 'Z')
	{
		rval = 1;
	}
	else
	{
		rval = 0;
	}

	return (rval);
}

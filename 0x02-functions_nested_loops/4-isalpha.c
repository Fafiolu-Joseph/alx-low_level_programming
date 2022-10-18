#include "main.h"
/**
 * _isalpha - check for alphabets
 * @c : character to check
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int rval;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		rval = 1;
	}
	else
	{
		rval = 0;
	}
	return (rval);
}

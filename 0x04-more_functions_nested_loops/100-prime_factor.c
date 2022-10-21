#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long int x = 612852475143;
	long int pn;

	for (pn = 2; pn < x; pn++)
	{
		if (x % pn == 0)
		{
			x = x / pn;
		}
	}
	printf("%ld\n", pn);
	return (0);
}

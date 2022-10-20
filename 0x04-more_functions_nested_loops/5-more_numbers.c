#include "main.h"

/**
 * more_numbers - prints 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	char c, d;
	int i;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			d = c;

			if (c > 9)
			{
				_putchar('1');
				d = c % 10;
			}
			_putchar('0' + d);
		}
		_putchar('\n');
		i++;
	}
}

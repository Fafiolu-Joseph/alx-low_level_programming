#include "main.h"

/**
 * print_numbers - prints numbers 0 t0 9 followed by a new line
 * Return: always 0
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}

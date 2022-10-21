#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - print numbers
 * @n: numbers to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int a;


	a = n;
	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}

	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}

	_putchar((a % 10) + 48);
}

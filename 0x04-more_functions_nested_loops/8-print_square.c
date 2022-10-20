#include "main.h"

/**
 * print_square - to print square
 * @size: size of square
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size && size > 0; i++)
	{
		for (j = 0; j < size && size > 0; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

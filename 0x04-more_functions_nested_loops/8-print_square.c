#include "main.h"

/**
 * print_square - to print square
 * @size: size of square
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

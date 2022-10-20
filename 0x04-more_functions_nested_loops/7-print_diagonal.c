#include "main.h"

/**
 * print_diagonal - print diaginal lines
 * @n: number of diagonals to print
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i, j;


	for (i = 0; i < n && n > 0; i++)
	{
		for (j = 0; j < n && n > 0; j++)
		{

			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}

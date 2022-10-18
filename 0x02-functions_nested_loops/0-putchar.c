#include "main.h"
/**
 * main - Entry Point
 * Description: Printing with _putchar
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c[9] = "_printchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

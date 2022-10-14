#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char val;

	for (val = '0'; val <= '9'; val++)
	{
		putchar(val);
	}
	for (val = 'a'; val <= 'f'; val++)
	{
		putchar(val);
	}
	putchar('\n');
	return (0);
}

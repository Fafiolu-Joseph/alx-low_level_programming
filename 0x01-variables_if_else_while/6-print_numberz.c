#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char below 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
	{
		putchar(val + '0');
	}
	putchar('\n');
	return (0);
}

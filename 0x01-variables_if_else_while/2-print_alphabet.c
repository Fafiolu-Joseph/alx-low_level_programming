#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Printin alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;

	b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}


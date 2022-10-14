#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: prints allsingle digit numbers of
 * base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int valoo;

	for (valoo = 0; valoo < 10; valoo++)
	{
		printf("%d", valoo);
	}
	putchar('\n');
	return (0);
}

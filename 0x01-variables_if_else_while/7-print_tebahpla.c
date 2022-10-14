#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: printing lowercase letter in reverse order
 * Return: Always 0 (success)
 */
int main(void)
{
	int cha;

	for (cha = 'z'; cha >= 'a'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}

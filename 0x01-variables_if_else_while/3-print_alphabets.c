#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print alphabet in upper and lower
 * Return: Always 0
 */
int main(void)
{
	char c, d;

	c = 'a';
	d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	{
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

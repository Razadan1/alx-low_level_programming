#include <stdio.h>

/**
 * main - print alphabetts in small letter then upper.
 *
 * Return: return nothing
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
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints all letters in reverse
 *
 * Return: return nothing
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

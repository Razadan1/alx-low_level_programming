#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: the string
 *
 * Return: return nothing
 */
void print_rev(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = a;
	b = c - 1;
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar ('\n');
}

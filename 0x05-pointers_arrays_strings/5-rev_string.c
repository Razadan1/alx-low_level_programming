#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 *
 * Return: return nothing
 */
void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	while (b >= 0)
	{
		_putchar(s[b]);
		b --;
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10x
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int c, d;

	c = 1;
	while (c <= 10)
	{
		d = 97;
		while (d <= 122)
		{
			_putchar(d);
			d++;
		}
		c++;
		_putchar('\n');
	}
}


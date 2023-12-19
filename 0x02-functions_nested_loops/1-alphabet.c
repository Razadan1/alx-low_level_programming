#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: return nothing
 */
void print_alphabet(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: return nothing
 */
void print_alphabet(void)
{
	int c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

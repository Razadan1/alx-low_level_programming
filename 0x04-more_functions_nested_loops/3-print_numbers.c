#include "main.h"

/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: return 0
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

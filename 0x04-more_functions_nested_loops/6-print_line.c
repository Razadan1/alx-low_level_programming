#include "main.h"
/**
 * print_line - draws a straight line int the terminal
 *
 * @n: number of lines
 *
 * Return: return 0
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	 _putchar('$');	
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints everyother character of a string
 *
 * @str: the value
 *
 * Return: return nothing
 */
void puts2(char *str)
{
	int a, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	a = 0;
	while (a < len)
	{
		_putchar(str[a]);
		a = a + 2;
	}
	_putchar('\n');
}

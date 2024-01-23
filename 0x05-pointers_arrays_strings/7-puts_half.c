#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int lenght, b, c;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}

	if (lenght % 2 == 0)
	{
		b = lenght / 2;
		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
	}
	else if (lenght % 2)
	{
		c = (lenght - 1) / 2;
		while (c < lenght - 1)
		{
			_putchar(str[c + 1]);
			c++;
		}
	}
	_putchar('\n');
}

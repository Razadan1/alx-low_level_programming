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
	char tmp;
	int a, len_a, len_b;

	len_a = 0;
	len_b = 0;

	while (s[len_a] != '\0')
	{
		len_a++;
	}

	len_b = len_a - 1;
	a = 0;

	while (a < len_a / 2)
	{
		tmp = s[a];
		s[a] = s[len_b];
		s[len_b--] = tmp;
		a++;
	}
}

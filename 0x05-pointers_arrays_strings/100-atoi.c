#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the sstring to be converted to integer
 * Return: return nothing
 */
int _atoi(char *s)
{
	int a, b, c, lenght, n, num;

	b = 0;
	c = 0;
	lenght = 0;
	n = 0;
	num = 0;

	while (s[lenght] != '\0')
		lenght++;
	for (a = 0; a < lenght && n == 0; a++)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			n = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;

			n = 0;
		}
	}
	if (n == 0)
		return (0);

	return (n);
}

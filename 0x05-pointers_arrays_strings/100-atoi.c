#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the sstring to be converted to integer
 * Return: return nothing
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int a;

	for (a = 0; s[a] != '\0'; ++a)
	{
		if (s[a] == '-')
		{
			sign *= -1;
		}

		if (s[a] >= '0' && s[a] <= '9')
		{
			result = result * 10 + (s[a] - '0');
		}

		if (result != 0 && (s[a] < '0' || s[a] > '9'))
		{
			break;
		}
	}

	return (result * sign);
}

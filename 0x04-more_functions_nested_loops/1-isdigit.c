#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 *
 * @c: the digit
 *
 * Return: return 1 if digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isalpha - return 1 if char is upper or lower case else return 0
 * @c: will hold the variables to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
	return (1);
}
	else
{
	return (0);
}
}

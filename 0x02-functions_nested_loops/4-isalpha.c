#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: letter we are checking for
 *
 * Return: return 1 if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}

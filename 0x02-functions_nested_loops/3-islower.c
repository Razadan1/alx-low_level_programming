#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the small letter c
 *
 * Return: no return
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

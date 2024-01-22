#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: the lenght of the string
 *
 * Return: return 0
 */
int _strlen(char *s)
{
	int lenght;

	lenght = 0;

	do {
		lenght++;
	} while (s[lenght] != '\0');
	return (lenght);
}

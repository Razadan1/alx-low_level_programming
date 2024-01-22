#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
<<<<<<< HEAD
 * @s: the lenght of the string
=======
 * @s: the string
>>>>>>> refs/remotes/origin/master
 *
 * Return: return 0
 */
int _strlen(char *s)
{
<<<<<<< HEAD
	int lenght;

	lenght = 0;

	do {
		lenght++;
	} while (s[lenght] != '\0');
	return (lenght);
=======
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
>>>>>>> refs/remotes/origin/master
}

#include "main.h"

/**
 * _strncpy - copies the source string
 * to the destination string
 * @dest: destination string
 * @src: source string
 * @n: lenght of source string
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}

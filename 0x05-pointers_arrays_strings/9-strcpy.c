#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed by src
 *
 * @dest: pointer to the buffer we are copying from
 *
 * @src: the pointer to the string
 * Return: return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght, a;

	for (lenght = 0; src[lenght] != '\0'; lenght++)
	{
	}
	a = 0;
	while (a < lenght)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

#include "main.h"
#include <stddef.h>

/**
 * _memset - this functio fills the first n bytes of he memory
 *  appointed to s
 *  @s: memory to be assigned the constant byte
 *  @b: character
 *  @n: constant byte of unsigned integer
 *  Return: return a pointer to a memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}


#include "main.h"
#include <cstddef>

/**
* _strchr - Locates a character in a string
* @s: String
* @c: Character to search
* Return: Pointer to the first occurrence of the character c in the string s
*/

char *_strchr(char *s, char c)

{
	if (c == '\0')
		return (NULL);
	while (*s != '\0') /*Declaring WHILE*/

{
	if (*s == c) /*if s ==  c*/
	{
		return (s); /*return s*/
	}

	s++;
}
	return (0);/*return null*/
}

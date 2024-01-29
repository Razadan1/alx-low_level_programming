#include "main.h"
#include <ctype.h>

/**
 * rot13 - encodes a string
 * @str: the string to be encoded
 * Return: reurn the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char ab = *ptr;

		if (islower(ab))
		{
			*ptr = 'a' + (ab - 'a' + 13) % 26;
		}
		else if (isupper(ab))
		{
			*ptr = 'A' + (ab - 'A' + 13) % 26;
		}
		ptr++;
	}
	return (str);
}

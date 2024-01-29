#include "main.h"

/**
 * string_toupper - converts lower case to uppercase
 * @ptr: pointer address
 * Return: return uppercase
 */

char *string_toupper(char *ptr)
{
	char *str = ptr;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}

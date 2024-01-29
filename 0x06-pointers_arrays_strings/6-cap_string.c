#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @ptr: character to be capitalized
 * Return: return str 0(success)
 */

char *cap_string(char *ptr)
{
	char *str = ptr;

	int cap_txt = 1;

	while (*str != '\0')
	{
		if (cap_txt && islower(*str))
		{
			*str = toupper(*str);
		}
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ','
														|| *str == ';' || *str == '.' || *str == '?' || *str == '!'
														|| *str == '"' || *str == '(' || *str == ')' || *str == '}'
														|| *str == '}')
		{
			cap_txt = 1;
		}
		else
		{
			cap_txt = 0;
		}
		str++;
	}
	return (ptr);
}

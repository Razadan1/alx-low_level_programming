#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define DELIMETER ' '
/**
 * is_delimeter - this function cheks if a character is
 * a delimeter
 * @c: character to be checked
 * Return: return True if character is a delimeter
 * and False Otherwise
*/
bool is_delimeter(char c)
{
	return (c == DELIMETER);
}

/**
 * strtow - slips strings into words
 * @str: string array to be splitted
 * Return: returns a pointer to the splitted words
 */
char **strtow(char *str)
{
	int words_count, i, index;

	char **words_array;

	char *the_token;

	if (str == NULL || *str == '\0')
		return (NULL);

	words_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(is_delimeter(str[i])) && (i == 0 || is_delimeter(str[i - 1])))
		words_count++;
	}
	words_array = (char **)malloc((words_count + 1) * sizeof(char *));

	if (words_array == NULL)
		return (NULL);
	token = strtok(str, " ");

	index = 0;

	while (token != NULL)
	{
		words_array[index] = token;

		index++;
		token = strtok(NULL, " ");
	}
	words_array[index] = NULL;

	return (words_array);
}

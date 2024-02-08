#include <stdio.h>
#include "main.h"

/**
 * main - prints the name followed by new line
 *
 * @argc: the count of arguement
 * @argv: the vector of arguement
 * Return: return 0
*/
int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		return (1);
	}
}

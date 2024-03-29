#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
* @argc: The count of arguments (including the program name)
* @argv: An array of strings containing the arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

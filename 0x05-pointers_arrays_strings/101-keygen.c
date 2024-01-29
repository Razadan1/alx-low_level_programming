#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function
 * Return: return nothing
 */
int main(void)
{
	int length;

	void gen_password(int len);
	length = 8;

	srand((unsigned int)time(NULL));
	gen_password(length);
	return (0);
}

/**
 * rand_string - generates a random char from an array
 * Return: char value
 */
char rand_string(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int str_size = sizeof(str - 1);

	return (str[rand() % str_size]);
}

/**
 *  gen_password - this function generates a password
 *  @len: length of the password
 *  Return: void
 */

void gen_password(int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%c", rand_string());
	}
	printf("\n");
}

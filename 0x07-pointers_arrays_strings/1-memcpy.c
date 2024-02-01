#include "main.h"

/**
* _memcpy -   copy n bytes form adress "from" to adress
* @dest: content is to be copied
* @src: Source of data to be copied
* @n: bytes of the memory
* Return: return a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int a;

	a = 0;

	while (a < n)  /*Delacring WHILE*/

{

	*(dest + a) = *(src + a); /*add 1 position dest and src*/

	a++;

}     /*END WHILE*/

	return (dest);
}

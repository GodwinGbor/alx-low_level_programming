#include "main.h"
/**
 *_memcpy - the function that copies memory area
 *@dest: The memory where is stored
 *@src: The memory where is copied
 *@n: The number of bytes
 *
 *Return: copy the memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int i = n;

	for (; b < i; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}

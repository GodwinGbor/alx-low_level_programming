#include "main.h"
/**
 *_memcpy - The function to copy memory area
 *@dest: The memory where it is stored
 *@src: The memory where it is copied
 *@n: The number of bytes
 *
 *Return: The copied memory with n bytes changed
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

#include "main.h"
/**
 * _memset - block of memory with a specific value
 * @s:The address of memory to be filled
 * @b:  desired value
 * @n: The number of bytes to be changed
 *
 * Return: changing array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}

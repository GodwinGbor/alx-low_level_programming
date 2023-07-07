#include "main.h"
/**
 * _memset - fill all the blocked memory with a specific value
 * @s: To start to address memory to be filled
 * @b: desired value
 * @n: The number of the bytes to be changed
 *
 * Return: To change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

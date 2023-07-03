#include "main.h"
/**
 * _strpbrk - The Entry point
 * @s: The input
 * @accept: The input
 * Return: Always make 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int b;

		while (*s)
		{
			for (b = 0; accept[b]; b++)
			{
			if (*s == accept[b])
			return (s);
			}
		s++;
		}

	return ('\0');
}

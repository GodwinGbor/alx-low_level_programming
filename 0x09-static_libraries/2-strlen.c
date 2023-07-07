#include "main.h"
/**
 * _strlen - returning the length of the string
 * @s: The string
 * Return: The length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

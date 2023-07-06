#include "main.h"
/**
 * _strlen_recursion - The Returned of the length of the string.
 * @s: A string is to be measured.
 *
 * Return: A length of a string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

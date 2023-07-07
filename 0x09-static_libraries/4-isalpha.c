#include "main.h"

/**
 * _isalpha - to check alphabetic char
 * @c: char to be checked
 * Return: 1 if c is a letter, then 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

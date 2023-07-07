#include "main.h"
/**
 * _puts - prints the  string, followed by the new line, and to the stdout
 * @str: The string to be print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

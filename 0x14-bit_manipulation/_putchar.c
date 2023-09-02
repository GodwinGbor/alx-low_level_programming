#include "main.h"
#include <unistd.h>
/**
 * _putchar - how to write the char c to stdout
 * @c: char to print
 *
 * Return: On the success 1.
 * On error, -1 is returned, and then errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write the correct char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and then errno is set to be appropriate.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: Always 0 (Success)
 * On error, -1 is returned, and errno is set apppropriately.
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}


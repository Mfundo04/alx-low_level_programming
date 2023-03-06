#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stand out
 * @c: The character to print
 * Return: On succes 1
 * On error, -1 is returned, and the errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1))'
}


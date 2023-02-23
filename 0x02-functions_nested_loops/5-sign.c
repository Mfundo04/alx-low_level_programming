#include "main.h"
/**
 * print_sign - prints the sign of s number
 * @n: the int to check
 * Return: 1 is greater thanzero, 0 is zero.
 * -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	esle
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}


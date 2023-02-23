#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char m;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}


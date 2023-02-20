#include <stdio.h>
/**
 * main - Print all numbers of base 64 in lowercase
 * you can only use 'putchar' and only 13 times
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}


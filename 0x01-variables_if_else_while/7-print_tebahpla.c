#include <stdio.h>
/**
 * main - Print the alphabet in reverse order in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char ci;

	for (ci = 'z'; ci >= 'a'; ci--)
	{
		putchar(ci);
	}
		putchar('\n');
		return (0);
}


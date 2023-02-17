#include <stdio.h>
/**
 * main - print out sizes of data types in c program
 * Return: 0 (Success)
*/
int main(void)
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %ld bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}


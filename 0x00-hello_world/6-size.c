#include <stdio.h>
/**
 * main - A program that prints the sizes of computers
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu Byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu Byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu Byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu Byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu Byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

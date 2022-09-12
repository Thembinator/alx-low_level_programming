#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of char: % lu byte(s)\n", (unsigned)sizeof(c));
	printf("size of int: % lu byte(s)\n", (unsigned)sizeof(i));
	printf("size of long int: % lu byte(s)\n", (unsigned)sizeof(li));
	printf("size of long long int: % lu byte(s)\n", (unsigned)sizeof(lli));
	printf("size of float: % lu byte(s)\n", (unsigned)sizeof(f));
	return (0);
}

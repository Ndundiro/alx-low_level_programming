#include <stdio.h>

/**
 *main - print numbers 0 - 9 followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');

	return (0);
}

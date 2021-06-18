
#include <stdio.h>

/**
 *main - print lowercase a-z using putchar()
 *Return: Always 0 (Success)
 */

int main(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 *main - print letters of the alphabet in a way reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char first = 'z';

	while (first >= 'a')
	{
		putchar(first);
		first--;
	}
	putchar('\n');

	return (0);
}

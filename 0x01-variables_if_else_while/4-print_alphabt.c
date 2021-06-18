#include <stdio.h>

/**
 *main - print lowercase alphabet letters from a-z except for 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
	char first = 'a';

	while (alpha <= 'z')
	{
		if ((first != 'q') && (first != 'e'))
		{
			putchar(first);
		}
		first++;
	}
	putchar('\n');

	return (0);
}

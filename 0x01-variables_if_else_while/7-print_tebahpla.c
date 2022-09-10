#include <stdio.h>

/**
 * main - prints all alphabets in reverse
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	char b;

	b = 'z';
	while (b >= 'a')
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints all alphabets in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}

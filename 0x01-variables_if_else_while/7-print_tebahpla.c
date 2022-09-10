#include <stdio.h>
/**
 * main - A program that prints out the alphabets in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}

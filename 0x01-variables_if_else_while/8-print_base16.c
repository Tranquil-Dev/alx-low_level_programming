#include <stdio.h>

/**
 *  main - print hexadecimals
 *
 *   Return: Always 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num <= 16; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

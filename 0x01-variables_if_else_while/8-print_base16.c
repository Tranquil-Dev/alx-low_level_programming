#include <stdio.h>

/**
 * main - prints hexadecimals
 *
 * Return: 0 
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 17; num++)
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

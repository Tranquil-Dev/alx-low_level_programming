#include <stdio.h>

/**
 * main - prints all digits
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int num = 0;
	char alpha;

	alpha = 'a';
	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar(alpha + (num % 10));
		num++;
	}
	putchar('\n');
	return (0);
}

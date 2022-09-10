#include <stdio.h>

/**
 *  main - print hexadecimals
 *
 *   Return - 0
 */
int main(void)
{
	int num = 0;
	char b;
	
	b = 'z';
	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
			putchar(b + (num % 10));
		num++;
	}
	putchar('\n');
	return (0);
}

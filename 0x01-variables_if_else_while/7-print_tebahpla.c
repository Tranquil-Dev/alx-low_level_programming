#include <stdio.h>

/**
 * main - prints all alphabets in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}

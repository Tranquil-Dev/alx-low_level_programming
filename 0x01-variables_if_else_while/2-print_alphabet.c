#include <stdio.h>

/**
 * main - prints all alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i])
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

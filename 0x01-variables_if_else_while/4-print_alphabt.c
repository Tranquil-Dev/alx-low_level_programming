#include <stdio.h>
/**
 * main - A program that prints out the alphabets except q and e
 *
 * Return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
    if (!(alpha == 'q' || alpha == 'e'))
      putchar(alpha);
	putchar('\n');
	return (0);
}

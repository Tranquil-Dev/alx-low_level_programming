#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alpnum;
	int num;

	for (num = 1; num < 11; num++)
	{
		for (alpnum = 'a'; alpnum <= 'z'; alpnum++)
		{
			_putchar(alpnum);
		}
		_putchar('\n');
	}
}

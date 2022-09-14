#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowcase.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char alpnum;

	for (alpnum = 'a'; alpnum <= 'z'; alpnum++)
	{
		_putchar(alpnum);
	}
	_putchar('\n');
}

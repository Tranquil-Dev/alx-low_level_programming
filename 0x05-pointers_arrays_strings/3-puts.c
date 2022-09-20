#include "main.h"

/**
 * _puts - print string and new line
 * @s : parameter
 *
 * Return : void
 */
void _puts(char *s)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

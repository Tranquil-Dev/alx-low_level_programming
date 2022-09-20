#include "main.h"

/**
 * _strlen - returns length of string
 * @s : parameter of _strlen function
 *
 * Return : length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

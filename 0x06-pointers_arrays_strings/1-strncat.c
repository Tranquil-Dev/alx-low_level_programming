#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @terminus : destination
 * @src : source
 * @n : amount of n bytes from src
 * Return : pointer to terminus
 */
char *_strncat(char *terminus, char *src, int n)
{
	int count = 0;
	int count1 = 0;

	while (*(terminus + count) != '\0')
	{
		count++;
	}
	while (count1 < n)
	{
		*(terminus + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (terminus);
}

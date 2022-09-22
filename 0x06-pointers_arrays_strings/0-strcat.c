#include "main.h"

/**
 *_strcat - concatenates 2 strings
 * @ *terminus : destination
 * @ *src : source
 * Return returns pointer to destination
 */
char *_strcat( char *terminus, char *src)
{
	int count = 0; int count1 = 0;

	while (*(terminus + count) != '\0')
	{
		count++;
	}
	while (count1 >= 0)
	{
		*(terminus + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (terminus);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @ *terminus : destination
 * @ *src : source
 * @n : amount of bytes from source
 * Return : pointer to terminus
 */
char *_strncpy(char *terminus, char *src, int n)
{
	int i;

	for (i = 0; i < n  && src[i] != '\0'; i++)
		terminus[i] = src[i];
	for ( ; i < n; i++)
		terminus[i] = '\0';
	return (terminus);
}

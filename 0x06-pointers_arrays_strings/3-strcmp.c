#include "main.h"

/**
 * _strcmp - - compares 2 strings
 * @ *first_num : first string to compare
 * @ *sec_num : second string to compare
 * Return : less than 0 if s1 is less than s2, 0 if they are
 * equal, more than 0 if s1 is greater than s2
 */
int _strcmp(char *first_num, char *sec_num)
{
	while (*first_num == *sec_num)
	{
		if (*first_num == '\0')
		{
			return (0);
		}
		first_num++;
		sec_num++;
	}
	return (*first_num - *sec_num);
}

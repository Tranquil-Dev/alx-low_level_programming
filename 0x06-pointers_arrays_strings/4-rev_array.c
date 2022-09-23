#include "main.h"

/**
 * reverse_array - reverses an array pf integers
 * @ *a : array to be reversed
 * @n : number of elements in array
 * Return : nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, rev;

	j = n - 1;	
	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j--] = rev;
	}
}

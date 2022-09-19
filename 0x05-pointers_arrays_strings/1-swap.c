#include "main.h"

/**
 *  void swap_int(int *a, int *b) - swap integers
 *  @*a : function parameter is a integer
 *  @*b : function parameter is a integer
 *  Return : none
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

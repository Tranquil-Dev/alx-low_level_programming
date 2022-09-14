#include "main.h"
/**
 *
 *
 */
int print_last_digit(int n)
{	
	int num;

	if (n < 0)
	{
		num = ((n * -1) % 10);
	}
	else
	{
		num = (n % 10);
	}
	
	_putchar(num + '0');
	return (num);
}

#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - prints random numbers and tells whether they are positive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		n < 0 ? printf("%d is negative\n", n) : printf("%d is positive\n", n);
	}
	return (0);
}

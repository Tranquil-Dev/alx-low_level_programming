#include <stdio.h>

/**
 * main - it prints all single digits from 0-9
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}

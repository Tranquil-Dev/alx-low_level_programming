#include <stdio.h>

/**
 * main - it prints all single digits from 0-9
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}

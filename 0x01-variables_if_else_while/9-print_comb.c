#include <stdio.h>

/**
 *  main - print single digit
 *
 *   Return: Always 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9') 
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');
	return (0);
}

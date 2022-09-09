#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints sizeof each data type
 *
 * Return: 0 if executed successfully
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
  printf("Size of a char: %lu byte(s)\n", sizeof(int));
  printf("Size of a char: %lu byte(s)\n", sizeof(long int));
  printf("Size of a char: %lu byte(s)\n", sizeof(long long int));
  printf("Size of a char: %lu byte(s)\n", sizeof(float));
  
	return (0);
}


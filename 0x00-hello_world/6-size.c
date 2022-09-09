#include<stdio.h>
/**
 * main - print the size of data types
 *
 * Return: 0 always
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\r\n", sizeof(char));
	printf("Size of an int: %d byte(s)\r\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\r\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\r\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\r\n", sizeof(float));
	return (0);

}

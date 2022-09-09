#include <stdio.h>
#include<unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * 
 * Return: 0 (success)
 */
int main(void)
{
	char Z[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, Z, 59);
	return (1);
}

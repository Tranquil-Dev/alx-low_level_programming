#include "main.h"

/**
 * _isalpha - A program that Shows 1 if the input is c
 * letter Another cases, shows 0
 *
 * @c: The Charater is ASCII code
 *
 * Return: 1 for for letters. Returns 0 otherwise
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

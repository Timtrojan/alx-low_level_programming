#include "main.h"
/**
 * print_numbers - a function that prints the numbers
 * followed by a new line
 * Return: Always 0
 */
void print_numbers(void)
{
char c = '0';
while (c <= '9')
{
_putchar(c);
c++;
}
_putchar('\n');
}

#include "main.h"

/**
 * print_most_numbers - prints the numbers since 0 up to 9
 *Prints the numbers including 2 and 4
 * Return: Always 0 up to 9
 */
void print_most_numbers(void)
{
	int x = 2;

	for (: x <= 4; x++)
	{
	if (x == 2 || x == 4)
	{
continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}

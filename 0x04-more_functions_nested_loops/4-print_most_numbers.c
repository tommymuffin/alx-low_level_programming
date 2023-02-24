#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * Exclude numbers 2 and 4.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int q = 0;

	for (; q < 9; q++)
	{
	if (q != 2 && q != 4)
	{continue;
	}
	else
	{
	_putchar(q + '0');
	}
	}
	_putchar('\n');
}

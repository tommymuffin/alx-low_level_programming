#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int q;

	for (q = 48; q < 58; q++)
	{
		if (q != 50 && q != 52)
			_putchar(q);
	}
	_putchar('\n');

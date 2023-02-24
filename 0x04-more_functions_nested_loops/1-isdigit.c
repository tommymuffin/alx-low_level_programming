#include "main.h"

/**
 * _isdigit - checks if character is a number between 0 to 9.
 * @c: input number.
 * Return: 1 for digit (0 to 9), 0 for otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

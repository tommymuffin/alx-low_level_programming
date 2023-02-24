#include "main.h"

/**
 * _isupper - checks if letter is an uppercase character.
 * @q: input character.
 * Return: 1 for uppercase character, 0 for otherwise.
 */
int _isupper(int q)
{
	if (q >= 65 && q <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * get_bit - print the bit in a special index
 * @n:the number
 * @index:the place of the bit
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

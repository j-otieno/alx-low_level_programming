#include "main.h"

/**
 * clear_bit - sets the value of specific bit to 0
 * @n: pointer to the number to be changed
 * @index: index of the bit
 * Return: 1 if succesful and -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

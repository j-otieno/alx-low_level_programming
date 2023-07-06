#include "main.h"

/**
 * set_bit - sets bit at a specific index to 1
 * @n: pointer to the number to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 if successful, -1 if not successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

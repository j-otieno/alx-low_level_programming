#include "main.h"

/**
 * get_edianness - checks if machine has little or big edian
 * Return: 0 for big edian, 1 for little
 */
int get_edianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

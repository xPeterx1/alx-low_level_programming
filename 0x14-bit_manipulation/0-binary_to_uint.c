#include "main.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 * @b: type const char pointer of one bit
 * Return: converted number, or 0 if one or more char in str b that is not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bit = 0;
	unsigned int convnum = 0;

	if (b == NULL)
	return (0);
	while (*(b + bit) == '1' || *(b + bit) == '0')
	{
		convnum <<= 1;
		if (*(b + bit) == '1')
		convnum |= 1;
		bit++;



	}
	if (*(b + bit) == '\0')
	return (convnum);
	else
	return (0);

}

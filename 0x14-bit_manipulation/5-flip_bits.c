#include "main.h"
/**
 * flip_bits - Returns the number of bits  needed to be flipped
 * @n: type unsigned long int input pointer
 * @m: type unsigned long int position of unit
 * Return: flipped_bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numberofbytes, temp = 0;


	temp = n ^ m;

	while (temp > 0)
	{
	if ((temp & 1) != 0)
	numberofbytes++;
	temp =temp >> 1;
	}

	return (numberofbytes);






}

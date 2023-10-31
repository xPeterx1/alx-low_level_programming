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

	if (temp & 1)
	numberofbytes++;
	if (temp == 0)
	return (numberofbytes);
	temp >>= 1;








}

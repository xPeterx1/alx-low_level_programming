#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: type const unsigned long int
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	int valueofbit = 0;
	int numberofbits = 0;
	int temp = n;
	int comparison = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (temp != 0)
	{
		numberofbits++;
		 temp >>= 1;


	}
	comparison <<= (numberofbits - 1);
	while (comparison != 0)
	{

		valueofbit = n & comparison;
		if (valueofbit != 0)
		{
			_putchar('1');
		}
		else
		_putchar('0');
		comparison >>= 1;


	}
	_putchar('\n');



}

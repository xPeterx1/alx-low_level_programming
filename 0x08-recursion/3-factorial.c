#include "main.h"
/**
 * factorial - give you the factorial of a given number
 * @n: the given number
 * Return: the answer of the factorial
 */
int factorial(int n)
{
	if (n == 1)
	return (1);
	if (n < 0)
	return (-1);
	return (n * factorial(n - 1));





}

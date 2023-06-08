#include "main.h"
/**
 * _pow_recursion - good
 * @x: good
 * @y: good
 * Return: int
 */
int _pow_recursion(int x, int y)
{

	if (y == 1)
	{
	return (x);
	}
	if (y == 0)
	{
	return (1);
	}
	if (y < 0)
	{
	return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

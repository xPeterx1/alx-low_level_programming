#include "main.h"
/**
 * _strlen_recursion - to count the letters
 * @s: the pointer to the string
 * Return: number of l
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));




}

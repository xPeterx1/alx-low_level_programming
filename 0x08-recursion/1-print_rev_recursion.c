#include "main.h"
/**
 * _print_rev_recursion - a function that print the string in reverse
 * @s: the pointer that hold the address of the string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	return;
	_print_rev_recursion(s + 1);
	_putchar(*s);



}

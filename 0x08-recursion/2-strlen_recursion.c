#include "main.h"
 /**
  * _strlen_recursion - count the letters
  * @s: pointer to the string
  * Return:the number of letters
  */

int _strlen_recursion(char *s)
{
	if(*s == 0)
	{
	return 0;
	}
	return (1 + _strlen_recursion(s + 1));




}

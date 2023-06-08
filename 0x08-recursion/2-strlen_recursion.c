#include "main.h"

int i = 0;
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	

	_strlen_recursion(s+1);
	i++ ;
	return (i);




}

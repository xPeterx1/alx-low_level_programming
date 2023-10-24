#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - good
 * @separator: good
 * @n: good
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{


unsigned int i;

va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
	if (separator != NULL)
	{
		if (i == n - 1)
		{
		printf("%i", va_arg(args, int));
		}
else
{
printf("%i", va_arg(args, int));
printf("%s", separator);
}

	}
		else
		{
			printf("%i", va_arg(args, int));
		}

}
va_end(args);
printf("\n");



}

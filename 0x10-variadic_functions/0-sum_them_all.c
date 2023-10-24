#include "variadic_functions.h"
/**
 * sum_them_all - good
 * @n: good
 * Return: good
 */
int sum_them_all(const unsigned int n, ...)
{
if (n != 0)
{
unsigned int i, sum = 0;

va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
va_end(args);
return (sum);
}
else
return (0);




}

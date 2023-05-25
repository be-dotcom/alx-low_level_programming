#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - calculates the sum of all its parameters.
* @n: The number of arguments passed to the function.
* Return:  the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}


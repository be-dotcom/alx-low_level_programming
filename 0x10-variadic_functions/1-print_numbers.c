#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of arguments passed to the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)

{
va_list nums;
unsigned int i;
va_start(nums, n);
for (i = 0; i < n; i++)
{
if (!separator)
printf("%d", va_arg(nums, int));
else if (separator && i == 0)
printf("%d", va_arg(nums, int));
else
printf("%s%d", separator, va_arg(nums, int));
}
va_end(nums);
printf("\n");

}


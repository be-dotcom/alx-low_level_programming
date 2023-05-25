#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)

{
va_list strings;
char *str;
unsigned int i;

va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char*);
if (str  == NULL)
printf("(nil");

else if (separator && i == 0)
printf("%s", str);
else
printf("%s%s", separator, str);
}
printf("\n");
va_end(strings);
}

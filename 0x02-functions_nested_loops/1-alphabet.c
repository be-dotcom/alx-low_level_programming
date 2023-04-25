#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char (ch);
	/* your code goes there */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

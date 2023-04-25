#include "main.h"
/**
 * main - Entry point
 * print_alphabet - Prints the lowercase alphabet, followed by a new line
 * Description: This function prints all lowercase letters of the alphabet
 * Return: void
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

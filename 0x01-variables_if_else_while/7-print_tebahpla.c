#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */


int main(void)
{
	char ch;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (ch = z ; ch <= a ; ch--)
		putchar(ch);
	putchar("\n");
	return (0);
}

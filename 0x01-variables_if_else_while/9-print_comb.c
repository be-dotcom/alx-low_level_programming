#include <stdlib.h>
#include <time.h>

/**
  * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (j = 0; j < 10; j++)
	{
		putchar(j);
	}
	for (k = 0; k < 10; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

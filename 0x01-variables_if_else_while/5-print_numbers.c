#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry
 * Description: prints all single digit number of base 10
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '0')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

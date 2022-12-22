#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabets in lowercase
 * return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always  0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}

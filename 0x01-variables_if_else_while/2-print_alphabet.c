#include <stdio.h>

/**
 * main -Enty point
 *
 * Description: print all alphabe letter
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	pucher('\n');

	return (0);
}

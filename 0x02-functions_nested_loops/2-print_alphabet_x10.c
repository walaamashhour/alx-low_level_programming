#include"main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 */

void print _alphabet_x10(void)
{
	int line, ch;

	for (line = o; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchart(ch);
		_putchar('\n');
	}
}

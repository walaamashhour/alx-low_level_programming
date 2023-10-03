#include "main.h"

/**
 * *_strchr - file memory
 * @s: pointer to put the constant
 * @c: constant
 *
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int ch;

	for (ch = 0; s[ch] >= '\0'; ch++)
	{
		if (s[ch] == c)
		{
			return (s + ch);
		}
	}
	return ('\0');
}

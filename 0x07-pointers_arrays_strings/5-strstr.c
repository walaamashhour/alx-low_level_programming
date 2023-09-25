#include "main.h"

/**
 *_strstr - function finds the first occurrence of the substring
 *@haystack: string
 *@needle: occurrence of the substring
 *Return: pointer to the substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack = "hello, world";
	char *needle = "world";
	char *t;

	t = _strstr(haystack, needle);
	printf("%s\n", t);
	return (0);
}

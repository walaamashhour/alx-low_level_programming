#include "main.h"

/**
 * *_memcpy - copy bytes from memory area
 * @dest: the address of memory to print
 * @src: source
 * @n: lengh of src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ch;

	for (ch = 0; ch < n; ch++)
	{
		dest[ch] = src[ch];
	}
	return (dest);
}

#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Result: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n);
{
	int scrlen = 0, i = 0;
	char *best = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (best);
}

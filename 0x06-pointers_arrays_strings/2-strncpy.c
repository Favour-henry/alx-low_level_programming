#include "main.h"
/**
 * _strncpy - copies a string, including a terminating null byte,
 * using at most an inputted number of byte.
 * if the length of the source string is less than the maximum byte number.
 * the remainder of thedestination string is filled with null bytes.
 * works identical the standard library function 'strncpy'.
 * @dest: input value
 * @src: input value
 * @n: number of byte copied.
 * Return: returns.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

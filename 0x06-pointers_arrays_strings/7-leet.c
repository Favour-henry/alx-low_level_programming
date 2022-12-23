#include "main.h"
/**
 * leet - function that encodesa string
 * @s: string that will be encoded
 * Return: returns encoded string
 */
char *leet(char *s)
{
	int i, j;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}
		}
	}
	return (s);
}

#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: n
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 * @n: Number to start printing from
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(",");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(",");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(",");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}

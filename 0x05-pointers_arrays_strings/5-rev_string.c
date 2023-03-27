#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	char arr[len];
	int i;

	for (i = 0; i < len; i++)
	{
		arr[i] = s;
		s--;
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = *s;
		s++;
	}
	_putchar('\n');
}

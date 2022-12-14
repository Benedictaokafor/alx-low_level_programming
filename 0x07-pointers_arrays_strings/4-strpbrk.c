#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: A pointer to the byte in s that matches one of the bytes in accepts,
 * or NULL if no such byte is founfd
 */
char *_strpbrk(char *s, char *accept)
{
	chasr *start = accept;

	while (*s)
	{

		while (*accept)
		{

			if (*accept == *s)

				return (s);

			accept++;
		}
		s++;
	}

	return (NULL);
}

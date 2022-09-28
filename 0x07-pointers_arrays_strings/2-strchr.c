#include "main.h"
#include <stdio.h>

 /**
 * _strchr - Locates a character in a string
 * @s: string to search
 * @c: The char to search for
 * Return: string from character
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}

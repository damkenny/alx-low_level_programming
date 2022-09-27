#include "main.h"
#include <stdio.h>

 /**
 * _strchr - Locaites a character in a string
 * @s: The string to search
 * @c: The char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		
		}

	}

}

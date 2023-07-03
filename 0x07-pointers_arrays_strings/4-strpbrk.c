#include "main.h"

/**
 * *_strpbrk - search  astring for any of a set of bytes.
 * @s: string.
 * @accept: string to match
 * Return: pointer to the byte in thet matches one of the bytes in accept
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}

	return (0);
}

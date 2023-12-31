#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer to newly allocated space in memory
 * which contains a copy the string given as a parameter.
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else if (m != 0)
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}

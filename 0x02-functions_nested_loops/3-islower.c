#include "main.h"

/**
 * _islower - funcation to check if character is lowercase
 *
 * @c: chechks input of function
 *
 * Return: return 1 if 'c' is lowercase
 * otherwise return always 0 to (success)
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

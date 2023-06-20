#include "main.h"

/**
 * main - entry point
 *
 * description: print_alphabet - utilizes on the _putchar function to print
 *		   the alphabet a - z 10 times
 *
*/

void print_alphabet_x10(void)
{
	int c;
	int ch;

	for (c = 0; c < 10; c++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
}

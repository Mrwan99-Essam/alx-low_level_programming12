#include "main.h"

/**
 * main - entry point
 *
 * Description: print_alphabet - utilizes on the _putchar function to print 
 *		   the alphabet a - z
*/

void print_alphabet_x10(void)
{
	int c;
	char ch;

	for (c = 0 ; c < 10 ; c++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	printf('\n');
}

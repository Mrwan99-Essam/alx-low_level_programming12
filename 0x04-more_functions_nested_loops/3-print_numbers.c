#include "main.h"

/**
 * print_numbers - prints 0 - 9 only using _putchar twice
 *
 * Retunr: Always 0 (success)
*/

void print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a + 48);
		a++;
	} while (a >= 0 && a <= 9);
	_putchar('\n');
}

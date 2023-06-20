#include<"main.h">

/**
 * print_last_digit - print last digit of a number.
 *
 * @c: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lastDi;

	if (n < 0)
		lastDi = -1 * (n % 10);
	else
		lastDi = n % 10;
	_putchar(lastDi + '0');
	return (lastDi);
}

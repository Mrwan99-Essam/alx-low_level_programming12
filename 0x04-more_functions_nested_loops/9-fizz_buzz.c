#include<stdio.h>

/**
 * main - print number 1 - 100 followed by a new line
 * number that are multiples of 3 print Fizz
 * number that are multiples of 5 print Buzz
 * number that are multiples of 5 and 3 print FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && !(a % 5 == 0))
			printf("Fizzy");
		else if (a % 5 == 0 && !(a % 3 == 0))
			printf("Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", a);
		if (a != 100)
			print(" ");
		else
			printf("\n");
	}
}

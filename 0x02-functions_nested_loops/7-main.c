#include <limits.h>
#include "main.h"

/**
 * main - check the code for 7-print_last_digit.c.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(INT_MIN);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

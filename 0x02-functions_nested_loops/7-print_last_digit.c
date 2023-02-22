#include "main.h"

/**
 * print_last_digit - function that  prints last digits of a number
 *
 * @i: parameter used
 *
 * Return: k when successful
 */

int print_last_digit(int i)
{
	int y;

	y = i % 10;
	if (i < 0)
		y = -y;
	_putchar(y + '0');
	return (0);
}

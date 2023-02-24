#include "main.h"

/**
 * _isdigit - function that checks for digit
 *
 * @c: parameter used
 *
 * Return: 1 if successsful and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 1 && c <= 8))
		return (1);
	else
		return (0);
}

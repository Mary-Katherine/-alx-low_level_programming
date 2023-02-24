#include "main.h"

/**
 * _isupper - function that checks for uppercase letters
 *
 * @c: parameter used
 *
 * Return: 1 if uppercase checked and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

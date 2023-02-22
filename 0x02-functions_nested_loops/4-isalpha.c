#include "main.h"

/**
 * _isalpha - function that checks for alphabet
 *
 * @c: parameter used
 *
 * Return: 1 when alphabets is present and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

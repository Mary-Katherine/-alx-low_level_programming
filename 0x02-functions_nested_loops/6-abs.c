#include "main.h"

/**
 * _abs - function that prints the absolute value of an integer
 *
 * @a: parameter used
 *
 * Return: a when successful
 */

int _abs(int a)
{

	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

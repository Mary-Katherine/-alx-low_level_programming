#include "main.h"

/**
 *_islower - prints lower case letters
 *
 *@c: parametre to be printed
 *
 * Return: 1 when it is a lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

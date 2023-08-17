#include"main.h"

/**
 * _isupper - check the upper charater
 * @c: function paramter
 * Return: 1 0n success 0 if it fails
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include"main.h"

/**
 * _isdigit - function that checks for 0 upto 9
 * @c: paramter to be checked
 * Return: 1 on success 0 if it fails
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

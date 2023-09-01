#include<stdio.h>
#include"main.h"

/**
 * -putchar - write the character c to stdout
 *  @c: Ther character to print
 *
 *  Return: on success 1
 *  on error -1 is returned and erro is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	

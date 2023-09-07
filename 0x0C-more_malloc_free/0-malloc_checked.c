#include"main.h"
#include<stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to new memory allcoated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}

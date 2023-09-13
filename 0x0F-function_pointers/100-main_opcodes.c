#include<stdio.h>
#include<stdlib.h>
/**
 * main - print the opcodes of itself
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of pointer to the arguments.
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int byte, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < byte; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

	if (index == byte - 1)
		continue;
	printf(" ");

		address++;
	}
	printf("\n");

	return (0);
}

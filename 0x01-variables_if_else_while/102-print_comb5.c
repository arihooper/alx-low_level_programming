#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 < 100; num1++)
{
for (num2 = 0; num2 < 100; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
putchar(',');

if (num1 != 99 || num2 != 99)
{
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

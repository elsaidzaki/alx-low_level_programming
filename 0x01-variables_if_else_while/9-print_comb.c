#include <stdio.h>
/**
 * main - print possible combinations
 *
 * Return: always 0 (success0)
 */
int main(void)
{
int i;
char cv[10] = "0123456789";

for (i = 0; i <= 9; i++)
{
putchar(cv[i]);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

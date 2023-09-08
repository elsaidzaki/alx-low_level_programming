#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: always 0 (success0)
 */
int main(void)
{
char cv[16] = "0123456789abcdef";
int i;

for (i = 0; i <= 16; i++)
{
putchar(cv[i]);
}
putchar('\n');
return (0);
}

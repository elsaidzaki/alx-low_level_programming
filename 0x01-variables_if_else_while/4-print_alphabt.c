#include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return:always 0 (success)
 */
int main(void)
{
char alp[24] = "abcdfghijklmnoprstuvwxyz";
int i;

while (i < 24)
{
putchar(alp[i]);
i++;
}
return (0);
}

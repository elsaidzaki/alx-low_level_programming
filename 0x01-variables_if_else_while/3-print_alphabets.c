#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnobqrstuvwxyz";
char ala[26] = "ABCDEFJHIHKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i <= 26; i++)
{
putchar(alp[i]);
putchar(ala[i]);
}
return (0);
}

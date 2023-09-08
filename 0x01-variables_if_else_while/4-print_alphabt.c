#include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return:always 0 (success)
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}

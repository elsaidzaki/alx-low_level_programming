#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: always 0 (success0)
 */
int main(void)
{
char cv[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;

for (i = 0; i < 26; i++)
{
putchar(cv[i]);
}
putchar('\n');
return (0);
}

#include "main.h"
/**
 * print_sign - print the sign
 * @n: get checked
 * Return:1 if its, 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
}
return (0);
}

#include "main.h"
/**
 * _isalpha - its alpa or not
 * @c:to be checked
 * Return: 1 if its alpha, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}

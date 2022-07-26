#include "main.h"
/**
 * _isalpha - check if the character is an alphabet char.
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 * @c: type int char
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

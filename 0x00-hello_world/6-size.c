#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char acharacter;
int  ainteger;
long along;
long long  alonglong;
float afloat;
printf("Size of a char: %lubyte(s)\n", sizeof(acharacter));
printf("Size of an int: %lubyte(s)\n", sizeof(ainteger));
printf("Size of a long int: %lubyte(s)\n", sizeof(along));
printf("Size of a long long int: %lubyte(s)\n", sizeof(alonglong));
printf("Size of a float: %lubyte(s)\n", sizeof(afloat));
return (0);
}

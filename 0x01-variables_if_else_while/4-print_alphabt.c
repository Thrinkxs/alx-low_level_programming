#include <stdio.h>
/**
 * main -main block
 * Description: Get a random number and compare last digit with 5
 * Return: 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}

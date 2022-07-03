#include <stdio.h>
/**
 * man - main block
 * Description: assign a random number to the variable each time it is executed
 * prints last digit of the nuumber stored in the variable n
 * Return: always 0 (Success)
 */
int main(void)
{
int ch;
int n;
for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
if (n > ch)
{
putchar(ch);
putchar(n);
if (ch != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10); /**
*this is an ascii code for the new line
	       */
return (0);
}

#include <stdio.h>
/**
 * main - main block
 * Description: assign a random number to the variable and execute
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10); /**
* this is an ascii code for the new line
*/
return (0);
}

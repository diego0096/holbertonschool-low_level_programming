#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int t = 0;

while (t < 10)
{
putchar(t + '0');
if (t < 9)
{
putchar(',');
putchar(' ');
}
t++;
}
putchar('\n');
return (0);
}

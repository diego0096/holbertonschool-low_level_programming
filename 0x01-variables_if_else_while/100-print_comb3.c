#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int t, r, u;
t = 0;
while (t < 100)
{
r = t % 10;
u = t / 10;
if (u < r)
{
putchar(u + '0');
putchar(r + '0');
if (t < 89)
{
putchar(',');
putchar(' ');
}
}
t++;
}
putchar('\n');
return (0);
}

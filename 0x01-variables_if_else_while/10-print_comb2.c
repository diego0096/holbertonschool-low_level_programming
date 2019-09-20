#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int t, r, u;
for (t > 0; t < 100; t++)
{
r = t / 10;
u = t % 10;
putchar(r + '0');
putchar(u + '0');
if (t < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

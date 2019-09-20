#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int t, r, u, v;
for (t = 0; t < 1000; t++)
{
r = t / 100; /* hundreds */
u = (t / 10) % 10; /* tens */
v = t % 10; /* singles */
if (r < u && u < v)
{
putchar(r + '0');
putchar(u + '0');
putchar(v + '0');
if (t < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

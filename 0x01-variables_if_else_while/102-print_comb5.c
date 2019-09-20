#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int t, r, u, v;
for (t = '0'; t <= '9'; t++)
{
for (r = '0'; r <= '9'; r++)
{
for (u = '0'; u <= '9'; u++)
{
for (v = '0'; v <= '9'; v++)
{
if ((t < u) || (t == u && r < v))
{
putchar(t);
putchar(r);
putchar(' ');
putchar(u);
putchar(v);
if (!(t == '9' && r == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}

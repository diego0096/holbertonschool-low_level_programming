#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char t;

for (t = 0; t < 10; t++)
putchar(t + '0');
for (t = 'a'; t <= 'f'; t++)
putchar(t);
putchar('\n');
return (0);
}

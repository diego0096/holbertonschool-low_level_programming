#include <stdio.h>
/**
 * main - Print the alphabet whit putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char t, s;

for (t = 'a' ; t <= 'z' ; t++)
putchar(t);
for (s = 'A' ; s <= 'Z' ; s++)
putchar(s);
putchar('\n');

return (0);
}

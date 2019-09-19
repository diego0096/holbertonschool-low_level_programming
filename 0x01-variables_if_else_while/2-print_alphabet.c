#include <stdio.h>
/**
 * main - Print the alphabet whit putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char t;

for (t = 'a' ; t <= 'z' ; t++)
putchar(t);
putchar('\n');

return (0);
}

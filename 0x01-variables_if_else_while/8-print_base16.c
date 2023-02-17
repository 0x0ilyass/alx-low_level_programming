#include <stdio.h>
/**
 * main - prints the numbers in base 16
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i - 10 + 'a');
}
}
putchar('\n');
return (0);
}


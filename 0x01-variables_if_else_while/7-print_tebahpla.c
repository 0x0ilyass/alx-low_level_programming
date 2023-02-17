#include <stdio.h>
/**
 * main - print the alphabets in reverse
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 25; i >= 0; i--)
{
putchar(i + 'a');
}
putchar('\n');
return (0);
}


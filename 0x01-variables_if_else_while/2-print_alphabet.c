#include <stdio.h>
/**
 * main - prints alpha in lower case
 * Return: always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}


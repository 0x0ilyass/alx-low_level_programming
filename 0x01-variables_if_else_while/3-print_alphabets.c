#include <stdio.h>
/**
 * main - prints alpha in lower and upper case.
 * return: always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}


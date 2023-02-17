#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line , except q and e
 * Return: always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}


#include <unistd.h>
/**
 * _putchar - Writes a character to standard output
 * @c: The character to write
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

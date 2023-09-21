#include <unistd.h>
#include <main.h>

/**
*_putchar - write the charachter c to stdout
*@c: the character to print
*
*Return: on success 1
*        on error, -1 is returned, and error 0 is set appropritely.
*/
int  _putchar(char c)
{
return (write(1, &c, 1));
